#include<stdio.h>
int main(){
    int sum=0,k,a[6],i,n,r;
    printf("enter the values: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
    printf("enter the last number of your continues series: ");
    scanf("%d",&n);
    k = (n*(n+1))/2;
    r=k-sum;
    printf("the missing value is: %d",r);
    return 0;
}