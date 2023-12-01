#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the value of rows: ");
    scanf("%d",&a);
    printf("enter the value of columns: ");
    scanf("%d",&b);
    int arr[a][b],brr[a][b];
    printf("enter the value of elements: ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the second arry's elements value: ");
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    int crr[a][b];
      for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        printf("\n");
    }
    printf("addition of matrix A and B is\n");
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}