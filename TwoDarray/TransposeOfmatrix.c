#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the value of rows ");
    scanf("%d",&a);
    printf("enter the value of columns ");
    scanf("%d",&b);
    int ar[a][b],br[b][a];
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
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            br[j][i]=ar[i][j];
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d",br[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}