#include<stdio.h>
int main(){

int i,j,s,e;
printf("enter the starting value: ");
scanf("%d",&s);
printf("enter the ending value: ");
scanf("%d",&e);
for (i=s;i<=e;i++)
{
    for (j=1;j<=10;j++)
    {
        printf("%d ",i*j);
    }
    printf("\n");
}

return 0;
}