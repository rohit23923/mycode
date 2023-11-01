#include<stdio.h>
int main(){
    int a,b,d;
    char c;
    do{
        printf("enter the value of A: ");
        scanf("%d",&a);
        printf("enter the value of B: ");
        scanf("%d",&b);
        printf("1 is addstion\n");
        printf("2 is subtract\n");
        printf("3 is multiply\n");
        printf("4 is divesion\n");
        printf("what is your choice: ");
        scanf("%d",&d);
    
        switch (d)
        {
            case 1: printf("the sum is: %d",a+b);
            break;
            case 2: printf("the subtract is: %d",a-b);
            break;
            case 3: printf("the multiply is: %d",a*b);
            break;
            case 4: printf("the divesion is: %d",a/b);
            break;
            default : printf("invalid input");


        }

      printf("\ndo you want to continue: ");
      scanf("%s",&c);
    }
    while(c=='y');
    return 0;

} 