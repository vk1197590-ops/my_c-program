#include <stdio.h>
int main()
{
    int n=5;
    int f=1;
    long fact=1;
    for (int i=1;i<=5;i++){
        fact=fact*i;
    }
    printf("factroial of %d=%d\n",n ,fact );
}
