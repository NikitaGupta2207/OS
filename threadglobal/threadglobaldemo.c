#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int count=0;

int add (int a , int b)
{
  return a+b;
}
void *thread(void *arg)
{
    add (3,5);
    count ++;
    printf("Thread\n");
}

int main(int argc, char const *argv[])
{
    pthread_t tid;
    count++;
    printf("Before thread creation\n");
    pthread_create(&tid, NULL, thread, NULL);
  // printf("After thread creation\n");
    //sleep(1);
    //printf("After sleep creation\n");
    
    printf("add function:%d\n", add(8,9));
    return 0;

}