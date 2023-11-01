#include<stdio.h>
int main(){
    int i,a[5],b;
    printf("enter the value: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for (i=1;i<5;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
    }
    printf("greates number is:%d\n",b);

    return 0;
}