#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
char byte;
 int in, out;
int nread;
in = open("abc.txt", O_RDONLY);
out = open("xyz.txt", O_WRONLY |O_CREAT, S_IRUSR|S_IWUSR);
while((nread = read (in,&byte,1)) > 0)
write(out,&byte,nread);
exit(0);
}