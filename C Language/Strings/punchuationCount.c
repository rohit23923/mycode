#include<stdio.h>
int main(){
    char a[100];
    int i,c=0;
    printf("enter your name");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='?'||a[i]=='.'||a[i]==','||a[i]==':')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}