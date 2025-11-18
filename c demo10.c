#include <stdio.h>

int main() {
int n;
printf ("enter the value of n\n");
scanf ("%d\n",&n);
if (n>=0)
{
    printf("n is a Even number \n");
}
else if (n<=0)
{
printf("n is a odd number \n");
}
else 
{
    printf("n is a zero ");
}
}