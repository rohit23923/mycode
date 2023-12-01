#include<stdio.h>
int main(){
    int a,b=0,r;
    printf("enter a number: ");
    scanf("%d",&a);
    while (a>=1)
    {
        r = a%10;
        b = b*10+r;
        a = a/10;
    }
    printf("%d",b);
}