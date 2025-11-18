#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter the value of a,b,c\n");
    scanf("%d\n",&a,&b,&c);
    if (a>b && a>c)
    {
        printf ("%d is the largest.\n",a);
    }
    else if (b>c && b>a)
    {
        printf ("%d is the largest.\n",b);
    }
    else if ( c>a && c>b)
    {
        printf("%d is the largest.\n",c);
    }
        else
        {
            printf ("two number are equal\n ");
        }
    
}
