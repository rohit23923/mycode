#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the value of rows ");
    scanf("%d",&a);
    printf("enter the value of columns ");
    scanf("%d",&b);
    int ar[a][b];
    printf("enter the elements of matrix ");
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
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    printf("matrix changed in shape\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}