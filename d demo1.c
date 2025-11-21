#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(5* sizeof (int));
    for (int i=0;i<5;i++)
    {
        printf("enter element%d:\n",i+1);
        scanf("%d",&*p);
    }
    printf("array elements:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }
    free(p);
     for(int i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
    
}
