#include<stdio.h>
int main ()
{
    union varsha 
    {
        int age;
        float mark;
        char name;
    };
    union varsha v;
    v.age=18;
    printf ("%d\n",v.age);
    v.mark=30.36;
    printf ("%.2f\n",v.mark);
}