#include<stdio.h>
int main(){
    int a,b,s=0;
    printf("enter the value of rows: ");
    scanf("%d",&a);
    printf("enter the value of columns: ");
    scanf("%d",&b);
    int i,j,arr[a][b];
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
            s=s+arr[i][j];
        }
        printf("\n");
    }
    printf("The sum of all elements: %d",s);
    
    return 0;
}