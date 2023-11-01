#include<stdio.h>
int main(){
    int i,j,c=0,d=0,e=0;
     char str1[100],str2[100];
    printf("enter the charecter of str1: ");
    fgets(str1,100,stdin);
    for(i=0;str1[i]!='\0';i++)
    {
        d++;
    }
    d=d-1;
    printf("%d\n",d);
    printf("enter the charcter of str2: ");
   fgets(str2,100,stdin);
    for(i=0;str2[i]!='\0';i++)
    {
        e++;
    }
    e=e-1;
     if(e==d)
    {
        for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i]!=str2[i])
            {
                c++;
                break;
            }
            
        }
    }
    
   if(c>0)
   {
    printf("both strings are not same");
    
   }
   else
   {
    printf("both strings are same");
   }
}