#include<stdio.h>
enum operation {
    add=10,
    difference,
    multiple,
    product,
};
int main ()
{
    enum operation op;
    op=multiple;
    printf("op is=%d",op);
}