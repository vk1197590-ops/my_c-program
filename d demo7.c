#include<stdio.h>
int main()
{
    int arr[100],n=5;
    printf("enter %d elements:\n",n);
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("reverse array:\n");
for(int i=n-1;i>=0;i--){
    printf("%d\n",arr[i]);
}
}
