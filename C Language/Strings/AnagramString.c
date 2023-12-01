#include<stdio.h>
int main()
{
    int i,j,c=0,d=0;
    char a[100],b[100];
    printf("enter the 1st string: ");
    scanf("%s",&a);
    printf("enter the 2nd string: ");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        d++;
    }
    printf("%d\n",d);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]=-1;
                break ;
            }
            
        }
    }
    if(c==d)
    {
        printf("is is a  anagram");
    }
    else
    {
        printf("it is not a anagram");
    }
  
return 0;
}