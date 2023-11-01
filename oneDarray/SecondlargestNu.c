#include<stdio.h>
int main(){
    int a[6],i,slarge=0,largest=0;
    printf("enter the values: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(largest<a[i])
        {
            slarge = largest;
            largest = a[i];
        }
        else if (slarge<a[i] && largest!=a[i])
        {
            slarge = a[i];
        }
    }
    printf("second largest number is %d",slarge);
    return 0;
}