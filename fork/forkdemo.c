#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count =0;

int main(int argc, char const *argv[])
{
    pid_t id;

    printf("Before fork\n");
    //Incoming
    id =fork();
  //  printf("After fork id\t PID\t PPID: %d %d %d\n", id, getpid(), getppid());
    if (0==id)
    {
      
     //   printf("In child: PID=%d\t PPID=%d\n", getpid(), getppid()); //child
        printf("count in the child :%d\n",count);
    }
    else
    {
      count ++;
   // printf("In parent: PID=%d\t PPID=%d\n", getpid(), getppid()); //list incoming
   printf("count in parent : %d", count);

    return 0;
}
