#include<stdio.h>
int main(){
    int x,y,z;
    for(x=1;x<=5;x++)
    {
        for(z=4;z>=x;z--)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
            if(y==1||y==x||x==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}