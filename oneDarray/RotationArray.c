#include<stdio.h>
int main(){
    int a[5],s,i;
    printf("enter the value: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j=0;j<1;j++){
    s=a[0];
   for(i=0;i<5;i++)
    {
        a[i]=a[i+1];
    }

    a[i]=s;
    }
    for(i=0;i<5;i++){
    printf("%d",a[i]);
    }
    return 0;
}