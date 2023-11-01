#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter the size of 1st string: ");
    scanf("%d",&a);
     char s[a];
    printf("enter the 1st string's charecter ");
        scanf("%s",&s);
    printf("enter the size of 2nd string: ");
    scanf("%d",&b);
    char d[b];
    printf("enter the 2nd string's charecter ");
     scanf("%s",&d);
    for(i=a,j=0;i<=a+b,j<=b;i++,j++)
    {
        s[i]=d[j];
    }
    printf("%s",s);

return 0;
}