#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#define _GNU_SOURCE 

void mymcpy(void *dest,void *src,size_t n)
{
	int i=0;
	char *csrc=(char *)src;
	char *cdest=(char *)dest;
	for(i=0;i<n;i++)
	{
		*cdest=*csrc;
		cdest++;
		csrc++;
	}
	printf("\n");
}


int main(int argc,char *argv[])
{
	int status,i,ret,fd,fd1;
	struct stat temp;
	char *src,*dest,*fp1,*fp2;
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("fd fail");
		exit(0);
	}
	fd1=open(argv[2],O_CREAT|O_RDWR,0666);
	ret=fstat(fd,&temp);
	if(ret<0)
	{
		perror("fd1 failed");
		exit(0);
	}
	printf("Size of the file is :%ld\n",temp.st_size);
	src=(char *)mmap(0,temp.st_size,PROT_READ,MAP_PRIVATE,fd,0);
	posix_fallocate(fd1,0,temp.st_size);
	dest==(char *)mmap(0,temp.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd1,0);

	fp1=src;
	fp2=dest;
	if(src==NULL)
	{
		perror("Map failed");
		exit (0);	}
	mymcpy(dest,src,temp.st_size);
	munmap(fp1,temp.st_size);
	munmap(fp2,temp.st_size);
	printf("\n");
}
