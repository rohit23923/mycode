#include<stdio.h>
int main(){
    int a,b,i,j,k;
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
    printf("shape of matrix is\n");
    for(i=0;i<a;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<b;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}