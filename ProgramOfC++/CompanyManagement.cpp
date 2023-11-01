#include<iostream>
using namespace std;
class contact
{
    public:
        string name;
       long long int phno;
        string email;
    void deatils()
    {
        cout<<"Enter the Employee Name"<<endl;
        cin>>name;
        cout<<"Enter the Phone Number"<<endl;
        cin>>phno;
        fflush(stdin);
        cout<<"Enter the Email Id"<<endl;
        cin>>email;
    }

};
class company
{
    public:
        string cname,ccountry,ccity;
        int pincode;
    void compdel()
    {
        cout<<"Enter the name of company"<<endl;
        cin>>cname;
        cout<<"Enter the city name"<<endl;
        cin>>ccity;
        cout<<"Enter the name of country"<<endl;
        cin>>ccity;
        cout<<"Enter the pincode"<<endl;
        cin>>pincode;
        display();
    }
    void display()
    {
        cout<<"Name of company is ->"<<cname<<endl;
        cout<<"City name ->"<<ccity<<endl;
        cout<<"Enter the pincode ->"<<pincode<<endl;
        cout<<"Country name ->"<<ccountry<<endl;
    }

};
class employee:public contact
{
    public:
     string edep,ecity;
        int edob,epin;
    void empdet()
    {
        deatils();
        fflush(stdin);
        cout<<"Enter the date of birth of employee"<<endl;
        cin>>edob;
        cout<<"Enter the name of the employee's department"<<endl;
        cin>>edep;
        cout<<"Enter the name of employee's city"<<endl;
        cin>>ecity;
        cout<<"Enter the pincode"<<endl;
        cin>>epin;
        display();
    }
    void display()
    {
        cout<<"DOB\t\t"<<"dpartment\t\t"<<"city\t\t"<<"pincode\n";
        cout<<edob<<"\t"<<edep<<"\t\t\t"<<ecity<<"\t\t"<<epin;
    }

};
class manager:public contact
{
    public:
        string depar;
        int salary,ta,da,pf;
    void manage()
    {
        deatils();
        cout<<"Enter the name of the department"<<endl;
        cin>>depar;
        cout<<"Enter the manager's salary"<<endl;
        cin>>salary;
        cout<<"Enter the manager's TA"<<endl;
        cin>>ta;
        cout<<"Enter the manager's DA"<<endl;
        cin>>da;
        cout<<"Enter the manager's PF"<<endl;
        cin>>pf;
    }
    void disp()
    {
        cout<<"department\t"<<"salary\t"<<"TA\t"<<"DA\t"<<"PF\n";
        cout<<depar<<"\t"<<salary<<"\t"<<ta<<"\t"<<da<<"\t"<<pf;
    }

};
int main()
{
    int choice;
    company c;
    employee e;
    manager m;
    start:
    cout<<"======ENTER YOUR CHOICE======"<<endl;
    cout<<"Press 1 for COMPANY deatils"<<endl;
    cout<<"Press 2 for EMPLOYEE deatils"<<endl;
    cout<<"Press 3 for COMPANY'S MANAGER deatils"<<endl;
    cin>>choice;
    switch (choice)
    {
        case 1:
        c.compdel();
        break;
        case 2:
        e.empdet();
        break;
        case 3:
        m.manage();
        break;
        default:
        break;
    }
  cout<<"\ndo you want to continue-y/n";
  char t;
  cin>>t;
  if(t=='y')
  {
    goto start;
  }
}