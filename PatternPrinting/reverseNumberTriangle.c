#include <stdio.h>

int main() {
   int i,j,k;
   for (i=5;i>=1;i--)
   {
     for (j=i;j>=1;j--)
     {
         for (k=1;k<=i;k++)
         {
             printf("%d",j);
         }
     }
     printf("\n");
   }
    return 0;
}