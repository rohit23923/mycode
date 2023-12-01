#include<stdio.h>
int main(){
    int a,b,c=0,i,j;
    printf("enter the value of rows ");
    scanf("%d",&a);
    printf("enter the value of columns ");
    scanf("%d",&b);
    printf("enter the elements of matrix\n");
    int ar[a][b];
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
            if(i==j&&ar[i][j]!=0||i!=j&&ar[i][j]==0)
            {
                c++;
            }
        }
    }
     if(c==a*b)
     {
        printf("this is a sparse matrix ");
     }
     else
     {
        printf("this is not a sparse matrix ");
     }

    return 0;
}