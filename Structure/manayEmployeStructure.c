#include<stdio.h>
struct employe
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employe e[5];
    char c;
    printf("enter the employe's details:\n");
    for(int i=0;i<5;i++)
    {
        printf("enter the employe's ID:\n");
        scanf("%d",&e[i].id);
        printf("enter the employe's salary:\n");
        scanf("%d",&e[i].salary);
        printf("enter the name of employe: ");
        scanf("%s",&e[i].name);
    }
    printf("all employe's details:\n");
    printf("id\tname\tsalary\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].salary);
    }
    printf("do you want to search -y/n\n");
    scanf(" %c",&c);

    if(c=='y')
    {
        int s;
        printf("enter emplye id");
        scanf("%d",&s);
       int i=0;
        while(i<5)
        {
            if(e[i].id==s)
            {
                printf("id\tname\tsalary\n");
                printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].salary);
            }
            i++;
        }
    } 
    
return 0;
}