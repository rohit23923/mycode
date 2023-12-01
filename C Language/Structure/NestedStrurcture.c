#include<stdio.h>
struct address
{
    int pincode;
    char city[20];
};
struct employe 
{
    char name[20];
    int id;
    struct address adr;
};
int main()
{
    struct employe e;
    printf("enter employee id");
    scanf("%d",&e.id);
    printf("enter the name of employe:");
    scanf("%s",&e.name);
    printf("enter the pincode:");
    scanf("%d",&e.adr.pincode);
    printf("enter the name of city:");
    scanf("%s",&e.adr.city);
    printf("Id\tName\tPincode\tCity\n");
    printf("%d\t%s\t%d\t%s",e.id,e.name,e.adr.pincode,e.adr.city);
return 0;
}