#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    int fd[2], fdd[2];
    int x,y, sum=0;
    pid_t id;
    pipe(fd);
    pipe(fdd);
    id=fork();
    if(id>0)
    {
        printf("In Parent\n");
        printf("enter two numbers\n");
        scanf("%d %d", &x, &y);
        write(fd[1],&x,sizeof(x));
        write(fd[1],&y,sizeof(y));
        close(fd[1]);
        read(fdd[0],&sum,sizeof(sum));
        printf("\nParent:\n");
        printf("sum received from child:%d\n", sum);
        close(fdd[0]);
     }

    else if(id==0)
    {
        read(fd[0], &x,sizeof(x));
        read(fd[0], &y,sizeof(y));
        printf("\nChild:\n");
        printf("Data received from parent:x=%d y=%d\n" ,x,y);
        close(fd[0]);
        sum =x+y;
        write(fdd[1], &sum, sizeof(sum));
        close(fdd[1]);
        
    }
    else
    close(fd[1]);
    return 0;
}