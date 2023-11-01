#include<stdio.h>
int main(){
    int i, marks[5];
    printf("enter the marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("marks\tindex\tstudent no");
    for (i=0;i<=4;i++)
    {
        printf("\n%d\t%d\t%d",marks[i],i,i+1);
    }
    
}