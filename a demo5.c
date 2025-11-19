#include<stdio.h>
int main()
    {
        int arr[5];
        printf("enter the element");
        int sum=0;
        for(int i=0;i<5;i++)
        {  
            printf ("enter the element");
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
            printf("sum of elements is %d",sum);
    }
