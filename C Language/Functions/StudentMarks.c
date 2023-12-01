#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks1,marks2,marks3,marks4,marks5; 
};
int main()
{
    struct student s[2];
    for(int i=0;i<2;i++)
    {
    printf("enter the name of student:%d\n",i+1);
    scanf("%s",&s[i].name);
    printf("enter the roll no.");
    scanf("%d",&s[i].rollno);
    printf("enter the marks of HINDI:\n");
    scanf("%d",&s[i].marks1);
    printf("enter the ENGLISH:\n");
    scanf("%d",&s[i].marks2);
    printf("enter the MATH:\n");
    scanf("%d",&s[i].marks3);
    printf("enter the SCIENCE:\n");
    scanf("%d",&s[i].marks4);
    printf("enter the ECONOMICS:\n");
    scanf("%d",&s[i].marks5);
    }
 printf("\nname\trollno.\tHINDI\tENGLISH\tMATH\tSCIENCE\tECONOMICS\n");
    for(int i=0;i<2;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",s[i].name,s[i].rollno,s[i].marks1,s[i].marks2,s[i].marks3,s[i].marks4,s[i].marks5);
    }
}




