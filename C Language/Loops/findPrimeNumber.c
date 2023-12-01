#include<stdio.h>
int main() {
    int i,j,k=0;
    printf("enter a number: ");
    scanf("%d",&j);
    for (i=2;i<=j-1;i++)
    {
        if (j%i==0)
        {
            k=1;
            break;
        }
    }
    if (k==0) printf("this is a prime number");
    else printf("this is not a prime number");
    
    return 0;
}