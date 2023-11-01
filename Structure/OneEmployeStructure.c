#include<stdio.h>
struct employe
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    struct employe e;
    printf("enter the deatils of employe\n: ");
    printf("enter the ID of employe\n");
    scanf("%d",&e.id);
    printf("enter the name of employe\n");
    scanf("%s",&e.name);
    printf("enter the employe's salary\n");
    scanf("%f",&e.salary);
    printf("employe's ID:%d\nemploye's name:%s\nemploye's salary:%f",e.id,e.name,e.salary);
}
