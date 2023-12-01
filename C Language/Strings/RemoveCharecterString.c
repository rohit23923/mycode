#include<stdio.h>
int main()
{
    char a[20],b;
    int i;
    printf ("enter the string: ");
    scanf("%s",&a);
    printf("which charecter you want to remove: ");
    scanf(" %c",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            while(a[i]!='\0')
        {
            a[i]=a[i+1];
            i++;
        }
        }
        
    }
       
    printf("%s",a);
return 0;
}