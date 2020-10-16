#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    printf("\nHello\n");
    printf("World\n");
    return 0;
}

// no \n - 1 write
// with \n - 2 write