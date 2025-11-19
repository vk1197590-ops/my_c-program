// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i;
   int a[5]={1,2,3,4,5};
   int max=a[0];
   for (i=1;i<5;i++)
   {
       for (i=1;i<5;i++)
       {
           if (a[5]>max)
           {
               max=a[i];
           }
       }
       printf ("largest element=%d\n",max);
   }
}
