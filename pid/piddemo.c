#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(int agrc, char const *argv[])
{
    pid_t id;
    pid_t parent_id; 

    id = getpid();
    parent_id=getppid();
    printf("PID: %d\n", id);
    printf("PPID: %d\n", parent_id);
    return 0;
}