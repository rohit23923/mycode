#include <stdio.h>

int main() {
  int i,j,k;
  for (i=1;i<=4;i++)
  {
      for (k=4;k>=i;k--)
      {
          printf(" ");
      }
      for (j=1;j<=i;j++)
      {
          printf("* ");
      }
      printf("\n");
  }
  for (i=1;i<=4;i++)
  {
      for (k=1;k<=i;k++)
      {
          printf(" ");
      }
      for (j=4;j>=i;j--)
      {
          printf("* ");
      }
         printf("\n");
  }
    return 0;
}