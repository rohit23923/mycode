#include <stdio.h>
int main() {
   int a,b,i,j,sr,sc;
   printf("enter the value of rows: ");
   scanf("%d",&a);
   printf("enter the value of columns: ");
   scanf("%d",&b);
   int arr[a][b];
   printf("enter the elements of matrix: ");
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
    for(i=0;i<a;i++)
    {
        sr=0;
        for(j=0;j<b;j++)
        {
            sr=sr+arr[i][j];
        }
        printf("addition of %d row is: ",i+1);
        printf("%d\n",sr);
    }
    for(i=0;i<a;i++)
    {
        sc=0;
        for(j=0;j<b;j++)
        {
            sc=sc+arr[j][i];
        }
        printf("addition of %d column is: ",j);
        printf("%d\n",sc);
    }
    int sd=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j)
            {
               sd=sd+arr[i][j]; 
            }
        }
    }printf("addition of diagonal matrix is: ");
    printf("%d",sd);
    
    return 0;
}