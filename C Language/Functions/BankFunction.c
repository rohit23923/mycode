#include <stdio.h>
int op_b,balance;    //global variable


void OpBl()
{
  
    long int c_no;
    char name[20];
    
   printf("enter your name: ");
   scanf("%s",&name);
   printf("enter your contact no.: ");
   scanf("%ld",&c_no);
   printf("enter opening balance must be higer then 1000: ");
   scanf("%d",&op_b);
   if(op_b>=1000)
   {
    printf("successfully amount added");
    balance=op_b;
   }
   else
   {
    printf("amount must be higher than 6000");
   }
    
}

void Wdrw()
{
   int w; 
    printf("Enter amount to withdraw: ");
    scanf("%d",&w);
    balance=balance-w;
    printf("Available Balance is: %d\n",balance);
    
}

void Dpst()
{
    int d;
    printf("enter amount to deposit: ");
    scanf("%d",&d);
    balance=d+balance;
    printf("Available Balance is: %d\n",balance);
}
int main()
{
    int a,b,c;

    printf("Welcome to SBI Bank\n");

    do
    {
        printf("1 = Opening Balance\n");
        printf("2 = Withdraw Amount\n");
        printf("3 = Deposit Amount\n");
        printf("4 = Total Balance\n");

        printf("Enter your Choice: ");
        scanf("%d",&c);

        switch (c)
        {
            case 1: 
            OpBl();
            break;

            case 2:
            Wdrw();
            break;

            case 3:
            Dpst();
            break;

            default: 
            printf("Wrong Command");
            break;
        }
     printf("\nDo you want to Continue: \n");
     printf("1 = Yes\t2 = No\n");
     scanf("%d",&b);

    } while(b==1);


}