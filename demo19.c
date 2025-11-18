berak
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter value of num");
    scanf("%d",&num);
    for (i=0;i<=5;i++)
    {
        if (i==4)
        break;
        printf("%d\n",i);
    }
}
