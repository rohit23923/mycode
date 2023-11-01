#include<stdio.h>
int main()
{
    int i,j,c=0,d,e=0,k;
    char a[10];
    printf("enter the string: ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    printf("total number of charecter: %d\n",c);
    printf("enter the no of patrs you want to divide the string\n");
    scanf("%d",&d);
    if(c%d==0)
    {
        k=c;
        k=k/d;
        for(i=0;i<d;i++)
        {
            for(j=e;j<k+e;j++)
            {
               printf("%c",a[j]);
            }
             printf("\n");
             e=j;
        }
        
    }
    else
    {
        printf("it is not possible: ");
    }
return 0;
}
