#include<stdio.h>
int main()
{
    int i;
    char a[10];
    printf("enter the string: ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
return 0;
}