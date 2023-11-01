#include<stdio.h>
int main(){
    int i,a[10];
    printf("enter the value: ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
    if (a[i]%2!=0)
    {
        printf("%dthis is a odd number\n",a[i]);
    }
    else
    {
        printf("%dthis is a even number\n",a[i]);
    }
    }
    return 0;
}