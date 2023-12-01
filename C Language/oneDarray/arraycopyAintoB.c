#include<stdio.h>
int main(){
    int i, a[5],b[5];
    printf("enter the value: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("arry copied");
    for(i=0;i<5;i++)
    {
    printf("\n%d",b[i]);
    }
}