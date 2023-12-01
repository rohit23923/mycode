#include<stdio.h>
int main(){
    char s[100];
    int i,c=0;
    printf("enter your name: ");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++ )
    {
        c++;
    }
    printf("%d\n",c);
    for(i=c;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}