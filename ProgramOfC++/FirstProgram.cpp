#include<iostream>
using namespace std;
class addition
{
    public:
    int a,b,c;
    void sum()
    {
        cout<<"enter the value a";
        cin>>a;
        cout<<"enter the value of b";
        cin>>b;
        c=a+b;
        cout<<"sum="<<c;
    }


};
int main()
{
    addition a;
    a.sum();
}