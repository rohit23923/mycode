#include<stdio.h>
int main(){
    int a,b,c=0,i,j;
    printf("enter the value of rows ");
    scanf("%d",&a);
    printf("enter the value of columns ");
    scanf("%d",&b);
    int ar[a][b];
    printf("enter the elements of matrix\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j&&ar[i][j]==1&&i!=j&&ar[i][j]==0)
            {
                c++;
            }
        }
    }
    if(c==a*b){
    printf("this is a identity matrix");
    }
    else{
        printf("this is not a identity matrix");
    }
    return 0;
}