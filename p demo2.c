// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main()
{
    char pen[10];
    printf ("enter the pen: ");
 fgets(pen, sizeof(pen), stdin);
    printf ("%d",pen);
}
