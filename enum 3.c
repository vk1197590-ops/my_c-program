#include<stdio.h>
enum number {
    a=10,
    b,
    c=20,
    d,
};
int main()
{
    enum number nu;
    nu=b;
    printf ("nu is=%d",nu);
}