#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include<stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int i,ret,fd;
	struct stat temp;
	char *temp1,*temp2;
	fd=open(argv[1],O_RDONLY);
	ret=fstat(fd,&temp);
	if(ret<0)
	{
		perror("stat fail");
		exit(0);
	}
	printf("Size of file is: %ld\n\n",temp.st_size);
	temp1=(char *) mmap(0,temp.st_size,PROT_READ,MAP_PRIVATE,fd,0);
	temp2=temp1;
	for(i=0;i<=temp.st_size;i++)
	{
		printf("%c",*temp1);
		temp1++;
	}
	munmap(temp2,temp.st_size);
printf("\n");
	return 0;
}
