#include<stdio.h>
int largest (int a,int b, int c)
{
 if (a>=b && a>=c){
     printf ("a is the largest");
 }
 else if (b>=a && b>=c){
     printf("b is the largest");
 }
 else {
     printf("c is the largest");
 }
}
int main()
{
    largest(6,7,10);
}
