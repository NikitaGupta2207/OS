#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char const *argv[])
{
    int fd;
   fd =  open("desd", O_WRONLY );
   write(fd, "cdac\n", 5);
   close(fd);
    return 0;
}