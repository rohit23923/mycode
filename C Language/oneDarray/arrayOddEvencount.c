#include<stdio.h>
int main(){
    int i,a[10],e=0,o=0;
    printf("enter a number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
           printf("\n%dthis is a even number",a[i]);
            e++;
        }
         else
         {
            printf("\n%dthis is odd number",a[i]);
            o++;
         }
    }
    printf("\ntoral even number=%d \ntotl odd number %d",e,o);

}