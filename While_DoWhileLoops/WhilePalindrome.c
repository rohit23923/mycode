#include<stdio.h>
int main(){
    int a,b,c=0,r;
    printf("enter a number: ");
    scanf("%d",&a);
    b=a;
    while (a>=1)
    {
        r=a%10;
        c=c*10+r;
        a=a/10;
    }
    printf("%d\n",c);
    if(c==b)
    {
        printf("this is a palindrome number");
    }
    else
    {
        printf("this is not a palindrome number");
    }
    return 0;
}