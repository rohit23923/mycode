#include<stdio.h>
int main(){
    int i,a[5];
    printf("enter the values: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}