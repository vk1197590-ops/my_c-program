#include<stdio.h>
int sicalculator(){
    int p,t,r,si;
    printf("enter the value of principle\n");
    scanf("%d",&p);
    printf("enter the your time\n");
    scanf("%d",&t);
    printf("enter the value of rate of amount\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf(" %d",si);
}
int main()
{
    sicalculator();
}
