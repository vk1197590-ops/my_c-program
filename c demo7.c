#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a and b\n");
    scanf("%d\n",&a,&b);
    int sum, difference,product;
    float quotient;
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
   printf("sum=%d\n,difference=%d\n,product=%d\n,quotient=%f\n",sum,difference,product,quotient");
