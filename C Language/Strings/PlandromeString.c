#include<stdio.h>
int main()
{
    int i,c=0,f=0;
    char s[10];
    printf("enter the string ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    printf("total charecter is %d\n",c);
    for(i=0;i<c/2;i++)
    {
    if(s[i]!=s[c-i-1])
    {
        f++;
        break;
    }
    }

    if(f>=1)
    {
        printf("not pallandrom");
    }
    else
    {
        printf(" pallandrom");
    }
return 0;
}