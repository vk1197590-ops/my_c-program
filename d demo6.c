#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p;
  p=(int*)malloc( sizeof(int));
  {
      printf("memory not allocates");
      return 0;
  }
}
