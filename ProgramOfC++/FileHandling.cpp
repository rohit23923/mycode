#include<iostream>
#include<fstream>
using namespace std;
fstream f,tf;
class employee
{
    public:
    int id,salary;
    string name;
    void add()
    {
      cout<<"ENTER THE ID"<<endl;
      cin>>id;
      cout<<"ENTER THE NAME"<<endl;
      cin>>name;
      cout<<"ENTER THE SALARY"<<endl;
      cin>>salary;
    }
    void disply()
    {
        cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
    }
};
class trouble
{
    public:
    employee e;
   void file()
   {
     e.add();
     f.open("employee.txt",ios::app);
     f.write((char*)&e,sizeof(e));
     f.close();
    }
    void disp()
   {
     f.open("employee.txt",ios::in);
     cout<<"ID\t"<<"NAME\t"<<"SALARY"<<endl;
     while(f.read((char*)&e,sizeof(e)))
     {
        e.disply();
     }
     f.close();
    }
   void search()
   {
     int a;
     cout<<"ENTER THE ID WHICH YOU WANT TO SEARCH"<<endl;
     cin>>a;
     f.open("employee.txt",ios::in);
     while(f.read((char*)&e,sizeof(e)))
     {
      if(a==e.id)
      { 
        cout<<"ID\t"<<"NAME\t"<<"SALARY"<<endl;
        e.disply();
      }
     } 
     f.close();
    }
   void update()
   {
     int c;
     cout<<"ENTER THE ID WHICH YOU WANT TO UPDATE"<<endl;
     cin>>c;
     f.open("employee.txt",ios::in|ios::out);
     while(f.read((char*)&e,sizeof(e)))
     {
       if(c==e.id)
       {
        int pos;
        cout<<"ID\t"<<"NAME\t"<<"SALARY"<<endl;
        e.disply();
        e.add();
        pos=f.tellg();
        f.seekp(pos - sizeof(e));
        f.write((char*)&e,sizeof(e));
       }
     }
     f.close();
    }
     void del()
     {
       int m;
        cout<<"ENTER THE ID WHICH YOU WANT TO DELETE"<<endl;
        cin>>m;
        f.open("employee.txt",ios::in);
        tf.open("tem.txt",ios::out);
        while(f.read((char*)&e,sizeof(e)))
       {
         if(m!=e.id)
         {
           tf.write((char*)&e,sizeof(e));
         }
        }
        tf.close(); 
        f.close();
        remove("employee.txt");
        rename("tem.txt","employee.txt");
      }
};

int main()
{
    trouble t;
    start:
    int ch;
    cout<<"ENTER YOUR CHOICE"<<endl;
    cout<<"PRESS 1 FOR ADD RECORED"<<endl;
    cout<<"PRESS 2 FOR DISPLAY RECORED"<<endl;
    cout<<"PRESS 3 FOR SEARCH RECORED"<<endl;
    cout<<"PRESS 4 FOR UPDATE RECORED"<<endl;
    cout<<"PRESS 5 FOR DELETE RECORED"<<endl;
    cin>>ch;
    switch (ch)
    {
     case 1:
     t.file();
     break;
     case 2:
     t.disp();
     break;
     case 3:
     t.search();
     break;
     case 4:
     t.update();
     break;
     case 5:
     t.del();
     break;
     default:
     cout<<"INVALID INPUT";
     break;
    }
    cout<<"\nDO YOU WANT TO CONTINUE->y/n"<<endl;
    char r;
    cin>>r;
    if(r=='y')
    {
        goto start;
    }


return 0;
}  