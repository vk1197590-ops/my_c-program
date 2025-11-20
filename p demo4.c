#include<stdio.h>
int main()
{
    int num=121, original, rev=0, rem;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if (original==rev)
    {
        printf("it is pailindrome number");
    }
    else 
    {
        printf("it is not pailindrome number");
    }
}
