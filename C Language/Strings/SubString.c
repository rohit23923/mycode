#include<stdio.h>
int main()
{
    int i,j,c=0,n,k,z;
    char s[20];
    printf("enter name: ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    printf("total no of character:%d\n",c);
    n=c*(c+1)/2;
    printf("total no of possible sub string:%d\n",n);
    
    for(i=1;i<=c;i++)
    {
        
        for(j=0;j<=c-i;j++)
        {
            k=i+j-1;
            for(z=j;z<=k;z++)
            {
                printf("%c",s[z]);
            }
            printf("\n");
        }
    }

}