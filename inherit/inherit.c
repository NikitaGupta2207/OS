#include<stdio.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{

    pid_t id;
    id=fork();

    if(0==id)
    {
        printf("child starting\n");
        sleep(2);
        printf("child exiting\n");
    }
    else
    { 
        printf("parent starting\n");
        sleep(10);
        printf("parent exiting\n");

    }
    return 0;
    
}