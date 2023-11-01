#include<stdio.h>
void disp();
struct  employeManagement
{
    int id;
    char name[20];
    int salary;
    char address[20];
};
 struct employeManagement em;
void add()
{FILE *f1;
    printf("enter the id of employe:\n");
    scanf("%d",&em.id);
    printf("enter the name of empoyle:\n");
    scanf("%s",&em.name);
    fflush(stdin);
    printf("enter the salary of employe:\n");
    scanf("%d",&em.salary);
    printf("enter the residence address:\n");
    scanf("%s",&em.address);
    f1=fopen("employe_management.txt","a");
    fwrite(&em,sizeof(em),1,f1);
    printf("data stored sucessfully:\n");
    fclose(f1);
}
void disp()
{
    FILE *f2;                                                                                                                                                   
    f2=fopen("employe_management.txt","r");
    int i=0;
     printf("ID\tNAME\tSALARY\tADDRESS\n");
    while(fread(&em,sizeof(em),1,f2)==1)
    {
        printf("%d\t%s\t%d\t%s\n",em.id,em.name,em.salary,em.address);
        
    }  
    fclose(f2);  

} 
void search()
{
    int d;
    printf("ENTER THE EMPLOYE ID:-");
    scanf("%d",&d);
    FILE *f3;
    f3=fopen("employe_management.txt","r");
    int i=0;
    while(fread(&em,sizeof(em),1,f3)==1)
    {
        if(d==em.id)
        {
            printf("ID\tNAME\tSALARY\tADDRESS\n");
            printf("%d\t%s\t%d\t%s\n",em.id,em.name,em.salary,em.address);
        }
        
        
        
    }  
    fclose(f3);  

}
void update()
{
    FILE *f6;
    int d;
    printf("ENTER THE EMPLOYE ID:-");
    scanf("%d",&d);
    f6=fopen("employe_management.txt","r+");
    while(fread(&em,sizeof(em),1,f6)==1)
    {
        if(d==em.id)
        {
           fseek(f6,-sizeof(em),SEEK_CUR);
           printf("Enter New Values\n");
           em.id=d;
           printf("enter name\n");
           scanf("%s",&em.name);
           printf("enter salary\n");
           scanf("%d",&em.salary);
           printf("enter address\n");
           scanf("%s",&em.address);
           fwrite(&em,sizeof(em),1,f6);
            break;
        }
        
    } 
    fclose(f6); 

}
void delete()
{
    FILE *f4,*f5;
    int d;
    printf("ENTER THE EMPLOYE ID:-");
    scanf("%d",&d);
    f4=fopen("employe_management.txt","r+");
    f5=fopen("temp_management.txt","a");
    while(fread(&em,sizeof(em),1,f4)==1)
    {
        if(d!=em.id)
        {
            fwrite(&em,sizeof(em),1,f5);
        }
        
    }  
    fclose(f4);  
    fclose(f5);
    remove("employe_management.txt");
    rename("temp_management.txt","employe_management.txt");
    
}
int main()
{
    char c;
    do
    {
        int a;
        printf("WELCOME TO EMPLOYE MANAGEMENT SYSTEM:\n");
        printf("enter your choice:\n");
        printf("Press 1-for  add a record\n");
        printf("Press 2-for display a record\n");
        printf("Press 3-for search a record\n");
        printf("Press 4-for update a record\n");
        printf("press 5-for delete a record\n");
        scanf("%d",&a);
        switch (a)
        {
            case 1: 
            add();
            break;
            case 2:
            disp();
            break;
            case 3:
            search();
            break;
            case 4:
            update();
            break;
            case 5:
            delete();
            break;
            default:
            printf("INVALID INPUR:");
            break;
        }
        printf("DO YOU WANT TO CONTINUE -y/n=");
        scanf(" %c",&c);
    }while(c=='y');    
}
