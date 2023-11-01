#include<stdio.h>
int main(){
    char a[100],b[100];
    int i;
    printf("enter your name ");
    fgets(a,100,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];

    }
    b[i]='\0';
    printf("string copied successfull\n");
    printf("%s",b);

    return 0;
}
