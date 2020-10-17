#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int count=0;

int main(int argc, char const *argv[])
{
    pid_t id;

	//printf("Before for\n");
   	id =fork();

	if(0 ==id)
	{//child
	printf("Count in child: %d\n", count);
 	}
	else
	{
	count ++;
	printf("Count in parent: %d\n", count);
}
   
    return 0;
}
