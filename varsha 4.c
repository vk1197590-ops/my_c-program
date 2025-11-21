#include<stdio.h>
void swap (float *a,float *b)
{
   float temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    float bal1,bal2;
    printf (" enter the value of balance1\n ");
    scanf("%f",&bal1);
    printf("enter the value of balance 2\n");
    scanf("%f",&bal2);
    printf("before swap : \n balance 1=%f\nbalance2=%f\n",bal1,bal2);
    swap(&bal1,&bal2);
    printf("after swap: \nbalance1=%f\nbalance2=%f\n",bal1,bal2);
}
