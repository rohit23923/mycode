#include<stdio.h>
int main()
{
    int  i,j,a,b,a1,b1;
    int s=0;
    printf("enter no of  row ist matrix ");
    scanf("%d",&a);
    printf("enter no of  col ist matrix ");
    scanf("%d",&b);
    int ar[a][b];
    printf("enter elements of ist matrix\n");
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
    printf("enter no of  row 2nd matrix ");
    scanf("%d",&a1);
    printf("enter no of  col 2nd matrix ");
    scanf("%d",&b1);
    int br[a1][b1];
    printf("enter elements of 2nd matrix\n");
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            scanf("%d",&br[i][j]);
        }
    }
     for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            printf("%d",br[i][j]);
        }
        printf("\n");
    }
    int cr[a][b1];
    if(b!=a1)
    {
        printf("the multiplication is not possible order not match");
    }
    else
    {
        int k;
       for(i=0;i<a;i++)
       {
            
        for(j=0;j<b1;j++)
        {
           cr[i][j]=0;
            for(k=0;k<b;k++) 
            {
               cr[i][j]= cr[i][j]+ar[i][k]*br[k][j];
                
            }
           
             
        }
       }
    }
    printf("The result of multiply two matrix is\n");
     for(i=0;i<a;i++) 
    {
        for(j=0;j<b1;j++)
        {
            printf("%d ",cr[i][j]);
        }
        printf("\n");
    }
    return 0;
}