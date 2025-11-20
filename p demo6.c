#include<stdio.h>
int main()
{
    int num=10;
    int *p;
    p=&num;
    printf("vlaue of num=%d\n",num);
    printf("addess of num=%p\n",&num);
    printf("pointer p stores=%p\n",p);
    printf("value using points=%d\n",*p);
}
