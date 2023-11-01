#include<stdio.h>
int main(){
    int i,a[10],s=0,r=0;
    printf("enter the values: ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d this is a odd number\n",a[i]);
            s=s+a[i];
        }
        else 
        {
            printf("%d this is a even number\n",a[i]);
            r=r+a[i];
        }
    }
    printf("the sum of odd number is: %d\n",s);
    printf("the sum of even number is: %d",r);
    return 0;
}