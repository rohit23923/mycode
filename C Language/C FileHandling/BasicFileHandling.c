#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int contact;
    char address[20];
};

int main()
{
     FILE *f1;
    struct student s;
    printf("enter the roll no:");
    scanf("%d",&s.rollno);
    printf("enter the name of student:");
    scanf("%s",&s.name);
    printf("enter the contact detail:");
    scanf("%d",&s.contact);
    printf("enter the address of the student:");
    fflush(stdin);
    fgets(s.address,20,stdin);
    printf("\nrollno.\tName\tContact\t\tAddress\n");
    printf("%d\t%s\t%d\t%s",s.rollno,s.name,s.contact,s.address);
    f1=fopen("student_data.txt","w");
    fwrite(&s,sizeof(s),1,f1);
    printf("data sucessfully stored");
    fclose(f1);
return 0;
}