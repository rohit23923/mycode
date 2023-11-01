#include<stdio.h>
int main(){
    int a[5],i,j,c;
    printf("enter the value: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        c=1;
        for (j=i+1;j<=4;j++)
        {
        if(a[i]==a[j])
        {
            c++;
            a[j]=0;
        }
        }
        if(a[i]!=0)
        {
        printf("\n%d",a[i]);
        printf(" fq is =%d",c);
        }
    }
    
    

    return 0;
}