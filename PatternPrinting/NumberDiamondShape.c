#include<stdio.h>
int main() { 
    int i,j,k;
   for (i=9;i>=3;i=i-2)
   {
       for (k=8;k>=i;k--)
       {
           printf(" ");
       }
       for (j=1;j<=i;j++)
       {
           printf("%d ",j);
       }
       printf("\n");
   }
 for (i=1;i<=9;i=i+2)
 {
     for (k=9;k>=i;k--)
     {
         printf(" ");
     }
     for (j=1;j<=i;j++)
     {
         printf("%d ",j);
     }
     printf("\n");
 }
    return 0;
}