#include<stdio.h>
int main(){
    int i,a[5],b;
    printf("enter the Roll Numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which Roll Number you want to search: ");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(a[i]==b)
        {
            printf("positon of your entered number is %d",a[i+1]);
        }
    }
    return 0;
}