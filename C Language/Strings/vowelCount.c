#include<stdio.h>
int main(){
    char a[100];
    int i,c=0;
    printf("enter the name ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}