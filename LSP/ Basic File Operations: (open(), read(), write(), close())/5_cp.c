#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <unistd.h>
#include <errno.h>
#define BUFFERSIZE 4000 
int main(int argc, char* argv[])
{
int s, t;
char buffer[BUFFERSIZE];
int copy;
if ((s = open(argv[1], O_RDONLY)) < 0)
 {
perror("source");
 exit (1);
}
if ((t = open (argv[2], O_WRONLY | O_CREAT, 0644)) < 0)
 {
perror("Destination");
 exit (2);
}
while ((copy = read(s, buffer, BUFFERSIZE)) > 0) write(t, buffer, copy);
close(s);
 close(t);
}
