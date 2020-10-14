#include<stdio.h>

int add(int, int);
int sub(int, int);
int main(int argc, char const *argv[])
{
  printf("ADDITION: %d\n", add(10, 20));
  printf("DIFFERENCE: %d\n", sub(50, 20));
  return 0;  
}
