#include<stdio.h>
int main(){
int i,j,k,a,s;
for (i=1;i<=4;i++)
{
    a=i-1;
    for (s=4;s>=i;s--)
    {
        printf("  ");
    }
    for (j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
    for (k=1;k<=i-1;k++)
    {
        printf("%d ",a);
        a--;
    }
    printf("\n");
}

    return 0;
}