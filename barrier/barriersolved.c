#include <stdio.h>
#include<pthread.h>
#include<unistd.h>

pthread_barrier_t barr;

void *seriel(void *arg)
{
    printf("Serial: Initilizaton started\n");
    sleep(2);
    printf("Seriel: Initilized completed\n");
    pthread_barrier_wait(&barr);
    printf("Seriel: Started\n");

}
void *ethernet(void *arg)
{
    printf("ethernet: Initilizaton started\n");
    sleep(10);
    printf("ethernet: Initilized completed\n");
     pthread_barrier_wait(&barr);
     printf("ethernat: Started\n");


}
void *lcd(void *arg)
{
    printf("lcd: Initilizaton started\n");
    sleep(7);
    printf("lcd: Initilized completed\n");
     pthread_barrier_wait(&barr);
    printf("lcd: Started\n");

}
void *adc(void *arg)
{
    printf("adc: Initilizaton started\n");
    sleep(4);
    printf("adc: Initilized completed\n");
     pthread_barrier_wait(&barr);
    printf("adc: Started\n");

}


int main(int argc, char const *argv[])
{
    pthread_t s, e, l ,a;
    pthread_barrier_init(&barr, NULL, 4);
    pthread_create(&s, NULL, seriel, NULL);
    pthread_create(&e, NULL, ethernet, NULL);
    pthread_create(&l, NULL, lcd, NULL);
    pthread_create(&a, NULL, adc, NULL); 

    pthread_join(s, NULL);
     pthread_join(e, NULL);
     pthread_join(l, NULL); 
     pthread_join(a, NULL); 
    pthread_barrier_destroy(&barr);
    return 0;

}
 