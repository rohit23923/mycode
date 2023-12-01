#include<stdio.h>
int main()
{
    int i;
    char a[10],b[10];
    printf("enter the charecters of 1st string: ");
    scanf("%s",&a);
    printf("enter the charecter of 2nd string: ");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+b[i];
        b[i]=a[i]-b[i];
        a[i]=a[i]-b[i];
    }
    printf("in 1st string %s\n",a);
    printf("in 2nd string %s",b);
    return 0;
}