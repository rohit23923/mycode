#include<iostream>
#include<fstream>
using namespace std;
fstream t,temp,p,v;
class train
{
    public:
    int no,f,s;
    char t_name[20];
    void reg_train()
    {
        cout<<"Enter train name:\n";
        cin>>t_name;
        cout<<"Enter train number\n";
        cin>>no;
        cout<<"Enter avilable first class seats\n";
        cin>>f;
        cout<<"Enter avilable second class seats\n";
        cin>>s;
    }
    
    void dis_train()
    {
        cout<<t_name<<"\t\t"<<no<<"\t\t"<<f<<"\t\t"<<s<<endl;
    }

};
class passenger
{
    public:
    int age,passcode,contact,vid,vi;
    char name[20];
    void user_detail()
    {
        v.open("virtual.txt",ios::in|ios::binary);
        if(!v.is_open())
        {
            vid=501;
            v.open("virtual.txt",ios::out|ios::binary);
            v<<vid;
            v.close();
        }
        else
        {
            v>>vid;
            v.close();
        }
        cout<<"your vrtual id is: "<<vid<<endl;
        cout<<"Enter your virtual id: \n";
        cin>>vi;
        cout<<"Enter name of passenger\n";
        cin>>name;
        cout<<"Enter psscode\n";
        cin>>passcode;
        cout<<"Enter age of passenger\n";
        cin>>age;
        cout<<"Enter contact no.\n";
        cin>>contact;
        vid++;
        v.open("virtual.txt",ios::out|ios::binary);
        v<<vid;
        v.close();
    }
    void display()
    {
        cout<<vi<<"\t"<<name<<"\t"<<passcode<<"\t\t"<<age<<"\t"<<contact<<endl;
    }

};
class admin_mode
{
    public:
    train at;
    int id,choice;
    void chek()
    {
        cout<<"enter your ID\n";
        cin>>id;
        if(id==2002)
        {
            am();
        }
        else
        {
            cout<<"Enter valid ID\n";
        }
    }
    void am()
    {
        char a;
        start:
        cout<<"===WELCOME TO ADMIN MODE==="<<endl;
        cout<<"***Enter your choice"<<endl;
        cout<<"Press 1 for add train"<<endl;
        cout<<"Press 2 for display train"<<endl;
        cout<<"Press 3 for update train"<<endl;
        cout<<"Press 4 for delete train"<<endl;
        cout<<"Press 5 for passengers details"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
            add_train_menu();
            break;

            case 2:
            display_menu();
            break;

            case 3:
            update();
            break;

            case 4:
            delete_train();
            break;

            case 5:
            passenger_deteail();
            break;

        
         default:
            break;
        }
        cout<<"do you want to continue->y/n\n";
        cin>>a;
        if(a=='y')
        {
            goto start;
        }
    }

    void add_train_menu()
    {
        int a;
        cout<<"Select a train route\n";
        cout<<"Press 1 for HISAR TO REWARI\n";
        cout<<"Press 2 for SIRSA TO BHIWANI\n";
        cin>>a;
        switch (a)
        {
            case 1:
            add_train_h_r();
            break;

            case 2:
            add_train_s_b();
            break;
        
            default:
            break;
        }

    }

    void add_train_h_r()
    {
        at.reg_train();
        cout<<"train name\t"<<"train number\t"<<"1st class seats\t"<<"2nd class seats\t"<<endl;
        at.dis_train();
        t.open("hisar to rewari train.txt",ios::app|ios::binary);
        t.write((char*)&at,sizeof(at));
        t.close();
    }

     void add_train_s_b()
     {
        
        at.reg_train();
        cout<<"train name\t"<<"train number\t"<<"1st class seats\t"<<"2nd class seats\t"<<endl;
        at.dis_train();
        t.open("sirsa to bhiwani train.txt",ios::app|ios::binary);
        t.write((char*)&at,sizeof(at));
        t.close();

    }

    void display_route_menu_user()
    {
        int a;
        cout<<"choese a route \n";
        cout<<"Press 1 for HISAR TO REWARI ROUTE\n";
        cout<<"Press 2 for SIRSA TO BHIWANI ROUTE\n";
        cin>>a;
        switch (a)
        {
            case 1:
            display_trains_h_r();
            break;

            case 2:
            display_trains_s_b();
            break;

            default:
            break;
        }

    }

    void display_menu()
    {
        int a;
        cout<<"choese a route which you want to display\n";
        cout<<"Press 1 for display HISAR TO REWARI ROUTE\n";
        cout<<"Press 2 for display SIRSA TO BHIWANI ROUTE\n";
        cin>>a;
        switch (a)
        {
            case 1:
            display_trains_h_r();
            break;

            case 2:
            display_trains_s_b();
            break;

            default:
            break;
        }

    }

    void display_trains_h_r()
    {
       t.open("hisar to rewari train.txt",ios::in|ios::binary);
        cout<<"train name\t"<<"train number\t"<<"1st class seats\t"<<"2nd class seats\t"<<endl;
        while(t.read((char*)&at,sizeof(at)))
        {
            at.dis_train();
        }
        t.close();

    }

    void display_trains_s_b()
    {
       t.open("sirsa to bhiwani train.txt",ios::in|ios::binary);
        cout<<"train name\t"<<"train number\t"<<"1st class seats\t"<<"2nd class seats\t"<<endl;
        while(t.read((char*)&at,sizeof(at)))
        {
            at.dis_train();
        }
        t.close();

    }
    void update()
    {
        int a;
        cout<<"Choese a train for update\n";
        cout<<"Press 1 for UPDATE HISAR TO REWARI TRAIN\n";
        cout<<"Press 2 for UPDATE SIRSA TO BHIWANI TRAIN\n";
        cin>>a;
        switch (a)
        {
            case 1:
            update_h_r();
            break;

            case 2:
            update_s_b();
            break;
        
            default:
            break;
        }

    }

    void update_h_r()
    {
        train u_t;
        int ut,s;
        char ut_name[20];
        cout<<"Enter train no. which you want to update\n";
        cin>>s;
        t.open("hisar to rewari train.txt",ios::in|ios::out|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(s==at.no)
            {
                at.dis_train();
                int p;
                u_t.reg_train();
               p=t.tellg();
               t.seekp(p-sizeof(at));
               t.write((char*)&u_t,sizeof(u_t));
               break;
            }

        }
        t.close();

    }

    void update_s_b()
    {
        train u_t;
        int ut,s;
        char ut_name[20];
        cout<<"Enter train no. which you want to update\n";
        cin>>s;
        t.open("sirsa to bhiwani train.txt",ios::in|ios::out|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(s==at.no)
            {
                at.dis_train();
                int p;
                u_t.reg_train();
               p=t.tellg();
               t.seekp(p-sizeof(at));
               t.write((char*)&u_t,sizeof(u_t));
               break;
            }

        }
        t.close();

    }
    
    void delete_train()
    {
        int a;
        cout<<"select a ROUTE\n";
        cout<<"HISAR TO REWARI\n";
        cout<<"SIRSA TO BHIWANI\n";
        cin>>a;
        switch (a)
        {
            case 1:
            delete_train_h_r();
            break;

            case 2:
            delete_train_s_b();
            break;

            default:
            break;
        }

    }
    void delete_train_h_r()
    {
        int s;
        cout<<"Enter train no. which you want to delete\n";
        cin>>s;
        t.open("hisar to rewari train.txt",ios::in|ios::out|ios::binary);
        temp.open("temp.txt",ios::out|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(s!=at.no)
            {
                temp.write((char*)&at,sizeof(at));
            }

        }
        temp.close();
        t.close();
        remove("hisar to rewari train.txt");
        rename("temp.txt","hisar to rewari train.txt");
        cout<<"===TRAIN DELETED SUCCESSFULLY===";

    }

    void delete_train_s_b()
    {
        int s;
        cout<<"Enter train no. which you want to delete\n";
        cin>>s;
        t.open("sirsa to bhiwani train.txt",ios::in|ios::out|ios::binary);
        temp.open("temp.txt",ios::out|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(s!=at.no)
            {
                temp.write((char*)&at,sizeof(at));
            }

        }
        temp.close();
        t.close();
        remove("sirsa to bhiwani train.txt");
        rename("temp.txt","sirsa to bhiwani train.txt");

    }
    void passenger_deteail()
    {
        passenger pd;
        p.open("passenger.txt",ios::in|ios::binary);
        cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
        while(p.read((char*)&pd,sizeof(pd)))
        {
            
            pd.display();
        }
        p.close();
    }


};
class user
{
    public:
    admin_mode a;
    passenger pd;
    train at;
    void user_menu()
    {
        char a;
        start:
        int choice;
        cout<<"Enter your choice\n";
        cout<<"Press 1 for user sign up\n";
        cout<<"Press 2 for user login\n";
        cout<<"Press 3 for cancel reservation\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
            signup();
            break;

            case 2:
            user_login();
            break;

            case 3:
            cancel_reservation();
            break;
        
            default:
            break;
        }
        cout<<"\ndo you want to continue->y/n\n";
        cin>>a;
        if(a=='y')
        {
            goto start;
        }
    }
    void signup()
    {
        pd.user_detail();
        cout<<"v id\tname\tpasscode\tage\tcontact\n";
        pd.display();
        p.open("passenger.txt",ios::app|ios::binary);
        p.write((char*)&pd,sizeof(pd));
        p.close();
    }
    void user_login()
    {
        int code,vid;
        cout<<"Enter passenger details:\n";
        cout<<"Enter your virtual id\n";
        cin>>vid;
        cout<<"Enter passcode\n";
        cin>>code;
        p.open("passenger.txt",ios::in|ios::binary);
        while(p.read((char*)&pd,sizeof(pd)))
        {
            
            
            if(vid==pd.vi&&code==pd.passcode)
            {
                char c;
                cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
                pd.display();
                cout<<"do you want to book train seat:y/n\n";
                cin>>c;
                if(c=='y')
                {
                    cout<<"avilable ROUTES:\n";
                    a.display_route_menu_user();
                    book_ticket();
                }               
            }

        }
        p.close();
    }
    void book_ticket()
    {
        int a;
        cout<<"choese a route\n";
        cout<<"Press 1 for HISAR TO REWARI\n";
        cout<<"Press 2 FOR SIRSA TO BHIWANI\n";
        cin>>a;
        switch (a)
        {
            case 1:
            book_ticket_h_r();
            break;

            case 2:
            book_ticket_s_b();
            break;
        
            default:
            break;
        }
    }
    void book_ticket_h_r()
    {
        int a;
        cout<<"Enter train no. which you want to book\n";
        cin>>a;
        t.open("hisar to rewari train.txt",ios::in|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(a==at.no)
            {
                at.dis_train();
                seat();
            }
        }
        t.close();
    }

     void book_ticket_s_b()
    {
        int a;
        cout<<"Enter train no. which you want to book\n";
        cin>>a;
        t.open("sirsa to bhiwani train.txt",ios::in|ios::binary);
        while(t.read((char*)&at,sizeof(at)))
        {
            if(a==at.no)
            {
                at.dis_train();
               seat();
            }
        }
        t.close();
    }
    int seats,price,c1=1000,c2=500,c3=250;
    void seat()
    {
        int a;
        cout<<"CHOESE A COMPARTEMENT\n";
        cout<<"Press 1 for first class seat:=1000\n";
        cout<<"Press 2 for second class seat:=500\n";
        cout<<"Press 3 for general class seat:=250\n";
        cin>>a;
        switch (a)
        {
            case 1:
            price=c1;
            cout<<"===first class seat per person price: "<<price<<endl;
            category();
            break;

            case 2:
            price=c2;
            cout<<"===2nd class seat per person price: "<<price<<endl;
            category();
            break;

            case 3:
            price=c3;
            cout<<"===General class seat per person price: "<<price<<endl;
            category();
            break;

            default:
            break;
        }
    }
    void category()
    {
        int b;
        
        cout<<"How many seats you want to reserve\n";
        cin>>seats;
        cout<<"Select your category:\n";
        cout<<"Press 1 for army person\n";
        cout<<"Press 2 for (age) less then 12\n";
        cout<<"Press 3 for senior citizen\n";
        cout<<"Press 4 for adult\n";
        cin>>b;
        switch (b)
        {
            case 1:
            cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
            pd.display();
            cout<<"Your ticket price is Rs:- ";
            cout<<seats*0<<endl;
            cout<<"*****SUCCRSSFULY TICKET BOOKED";
            break;

            case 2:
            cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
            pd.display();
            cout<<"your ticket price is Rs:- ";
            cout<<seats*(price/3)<<endl;
            cout<<"*****SUCCRSSFULY TICKET BOOKED";
            break;

            case 3:
            cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
            pd.display();
            cout<<"your ticket price is Rs:- ";
            cout<<seats*(price/2)<<endl;
            cout<<"*****SUCCRSSFULY TICKET BOOKED";
            break;

            case 4:
            cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
            pd.display();
            cout<<"your ticket price is Rs:- ";
            cout<<seats*price<<endl;
            cout<<"*****SUCCRSSFULY TICKET BOOKED";
            break;

            default:
            break;
        }
    }
    void cancel_reservation()
    {
        int ce,cf;
        cout<<"====cancel reservation====\n";
        cout<<"enter your virtual id\n";
        cin>>ce;
        cout<<"enter your passcode \n";
        cin>>cf;
        p.open("passenger.txt",ios::in|ios::out|ios::binary);
        temp.open("temp.txt",ios::out|ios::binary);
        
        while(p.read((char*)&pd,sizeof(pd)))
        {
            if(pd.vi==ce&&pd.passcode==cf)
            {
                cout<<"v id\t"<<"name\t"<<"passcode\t"<<"age\t"<<"contact NO.\n";
                pd.display();
                cout<<"===YOUR RESERVATION HAS BEEN CANCELED SUCCESSFULLY\n";

            }
            else
            {
                
                temp.write((char*)&pd,sizeof(pd));
                
            }
            
        }
        temp.close();
        p.close();
        remove("passenger.txt");
        rename("temp.txt","passenger.txt");
    }

};

class main_menu: public admin_mode,public user
{
  public:
  int choice;
  void menu()
  {
  cout<<"===WELCOME TO RAILWAY SYSTEM==="<<endl;
  cout<<"***Enter your choice***"<<endl;
  cout<<"Press 1 for admin mode"<<endl;
  cout<<"Press 2 for user mode"<<endl;

  cin>>choice;
  switch (choice)
  {
    case 1:
    chek();
    break; 

    case 2:
    user_menu();
    break;

    default:
    break;
  }
  }
   
};
int main()
{
    char x;
    main_menu mm;
    do
    {
       mm.menu();
       cout<<"back to  main menu-y/n\n";
       cin>>x;
    } while (x=='y');
    
    
    return 0;   
}