#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=5;i=i+2)
    {
        for (k=5;k>=i;k--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=3;i>=1;i=i-2)
    {
       for(j=5;j>=i;j--)
       {
        printf(" ");
       }
       for(k=1;k<=i;k++)
       {
        printf("%d ",k);
       }
       printf("\n");

    }
 
}