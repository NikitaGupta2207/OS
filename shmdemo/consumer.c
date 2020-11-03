#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>        
#include <fcntl.h> 
#include <sys/types.h>
#include <unistd.h> 

int *count_consumer;


int main(int argc, char const *argv[])
{
    int shmfd;
    shmfd = shm_open("/cdacshm", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
    ftruncate(shmfd, sizeof(int));
    count_consumer = (int*)mmap(NULL,sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED,shmfd, 0 );
   
   while(1)
   {
      printf("Count in consumer: %d\n", *count_consumer);
      sleep(1);
   }
   
    shm_unlink("/cdacshm"); 
    return 0;
}