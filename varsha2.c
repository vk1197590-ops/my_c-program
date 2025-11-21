#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,distance;
    printf("enter the value of x1 AND x2\n");
    scanf("%d%d",&x1,&x2);
    printf("enter the value of y1 AND y2\n");
    scanf("%d%d",&y1,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf(" the striagth line distance:%d\n",distance);
}
