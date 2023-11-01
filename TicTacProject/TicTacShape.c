#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==2)
            {
                printf(" ");
            }
            if(i!=2)
            {
                 printf("_");
            }
            if(j!=2)
            {
                 printf("|");
            }
        }   
        printf("\n");
    }
    
return 0;
}