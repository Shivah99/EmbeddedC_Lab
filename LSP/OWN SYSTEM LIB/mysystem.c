#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>

int main()
{
pid_t pid;
int ret,status;
char *argv[]={"ls"};


pid = fork();
system("ls");
if(pid==-1)
{
perror("pid failed");
}

else if (pid == 0)
{
	printf("This is child\n");
	execve("ps",argv,0);
	if(ret<0)
	perror("execve fails");
	exit(0);
}

else
{
	printf("This is parent\n");
	wait(&status);
}
}

