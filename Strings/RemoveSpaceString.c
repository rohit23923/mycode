#include<stdio.h>
int main()
{
    int i;
    char a[20];
    printf("enter the string: ");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
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