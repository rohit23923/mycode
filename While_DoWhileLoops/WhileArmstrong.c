#include<stdio.h>
int main(){
    int a,b,r,s=0,d;
    printf("ente a number: ");
    scanf("%d",&a);
    d=a;
    while(a>=1)
    {
        r=a%10;
        b=r*r*r;
        s=s+b;
        a=a/10;

    }
    printf("%d",s);
    if (d==s)
    {
        printf("\nthis is a armstrong number");
    }
    else{
        printf("\nthis is not a armstrong number");
    }
    return 0;
}