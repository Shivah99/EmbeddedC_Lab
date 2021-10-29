#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <linux/fb.h>
#include<sys/time.h> 


int main(int argc, char * argv[])
{
int fd, screensize, i, size;
unsigned int *buff;
unsigned char *buff1;
char buff2[4096];
struct fb_var_screeninfo temp; 
struct fb_fix_screeninfo temp2;
fd=open("/dev/fb0",O_RDWR);

if(fd<0)
{
perror ("Open fails");
exit(0);
}

ioctl (fd, FBIOGET_VSCREENINFO,&temp); 
ioctl (fd, FBIOGET_FSCREENINFO,&temp2);
printf("xres: %d\tyres:%d\tbitsperpixel: %d\n", temp.xres, temp.yres, temp.bits_per_pixel);
printf("fix length: %d\n", temp2.line_length);
screensize = temp.xres*temp.yres * (temp.bits_per_pixel/8); 
printf("screensize: %d\n", screensize);
size = temp2.line_length* temp.yres;
int fd2;
fd2=open (argv[1],O_RDONLY);
if(fd2<0)
{
perror("Image Open fails"); 
exit(0);
}
read (fd2, buff2,54);
int imh, imw, imbpp, imfs, bmfor;
bmfor=buff2[0]&0x00ff | buff2[1] <<8;
printf("bmformat: %x\n", bmfor);
if (bmfor == 0x4d42)
{
imfs =((buff2[2] && 0x000000FF) | buff2[3] <<8 | buff2[4]<<16 | buff2 [5]<<24);
imw = (buff2[18] &  ~(0xFFFFFF00))| buff2[19]<<8 | buff2[20]<<16 | buff2[21]<<24;
imh = (buff2[22] &~(0xFFFFFF00))| buff2[23]<<8 | buff2[24]<<16 | buff2[25]<<24;
imbpp = buff2[28] | buff2[29]<<8;
printf("image file size: %d\nimage x resolution: %d\nimage y resolution: %d\nimage bits per pixel: %d\n", imfs, imw, imh, imbpp);

char *fbuff;
int linelen, j,k;
char red, green, blue,alpha;
if (temp.xres==imw && temp.yres==imh && temp.bits_per_pixel==imbpp)
{
buff=mmap(0, size, PROT_READ | PROT_WRITE,MAP_SHARED, fd, 0);
buff1=mmap(0, screensize, PROT_READ, MAP_SHARED, fd2, 0);
fbuff = buff1 + 54;
linelen = temp2.line_length/4; 
for(j=temp.yres-1; j>=0; j--)
{
for (k=0; k<temp.xres; k++)
{
red = fbuff[0];
green=fbuff[1];
blue = fbuff[2];
alpha= fbuff[3];
fbuff += 4; 
buff[j*linelen+k] =( red | (green << 8) | (blue << 16) | (alpha << 24));
}
}
}
else
{
perror("Image and device sizes are not matching");
exit(0);
}
}
else
{
perror("File is not in BMF format"); 
exit(0);
}
munmap (buff1, imfs);
munmap (buff, size);
close(fd);
close(fd2);
return 0;

}