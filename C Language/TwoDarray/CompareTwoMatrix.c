#include<stdio.h>
int main(){
    int a,b,i,j,c=0;
    printf("enter the value of rows: ");
    scanf("%d",&a);
    printf("enter the value of columns: ");
    scanf("%d",&b);
    int ar[a][b],br[a][b];
    printf("enter the elements of matrix A ");
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
    printf("enter the elements of matrix B ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&br[i][j]);
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d",br[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=b;j++)
        {
         if(ar[i][j]==br[i][j])
         {
            c++;
         }
        
        }
    }
    if(c==a*b)
    {
        printf("both matrix are same");
        
    }
    else
    {
        printf("both matrix are not same");
    }
    return 0;
}