#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],rev[50];
    int i,len;
    printf("enter a string: ");
    for(i=0;i<len;i++)
    {
    rev[i]=str[len-1-i];
rev[len]='\0';
}
if (strcmp(str,rev) )    
{
    printf("it is a palindrome");
}
else
{
    printf("it is not a palindrome");
}
}
