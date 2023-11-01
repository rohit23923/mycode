#include<iostream>
using namespace std;
class employee
{
    public:
    char name[20];
    int salary;
    int id;
    
    void dete()
    {
        cout<<"ENTER THE EMPLOYEE DETEAILS\n";
        cout<<"enter the id no. of employee\n";
        cin>>id;
        cout<<"enter the name of employee\n";
        cin>>name;
        cout<<"enter the salary of employee\n";
        cin>>salary;
      
    }


    void put()
    {
        
        cout<<id<<"\t"<<name<<"\t"<<salary<<"\n";
    }
};
int main()
{
    employee e[5];
    for(int i=0;i<=4;i++)
    {
        e[i].dete();
    }
    cout<<"\n=====x=====x=====x=====\n";
    cout<<"id no.\tname\tsalary\t\n";
     for(int i=0;i<=4;i++)
    {
        e[i].put();
    }
    

}