#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc ,char *argv[])
{
  if(argc < 2)
  {
    printf("usage : ./kill PID");
    return -1;
  }
  kill(pid,SIGKILL);
  return 0;
}