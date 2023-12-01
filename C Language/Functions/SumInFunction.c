#include<stdio.h>
void sum()
{
    int a,b,c=0;
    printf("enter the value A: ");
    scanf("%d",&a);
    printf("enter the value B: ");
    scanf("%d",&b);
    c=a+b;
    printf("%d\n",c);
}
void sub()
{
    int a,b,c;
    printf("etner the vlaue of A: ");
    scanf("%d",&a);
    printf("enter the value of B: ");
    scanf("%d",&b);
    c=a-b;
    printf("%d\n",c);
}
void divi()
{
    int a,b,c;
    printf("etner the vlaue of A: ");
    scanf("%d",&a);
    printf("enter the value of B: ");
    scanf("%d",&b);
    c=a/b;
    printf("%d\n",c);
}
void mul()
{
    int a,b,c;
    printf("etner the vlaue of A: ");
    scanf("%d",&a);
    printf("enter the value of B: ");
    scanf("%d",&b);
    c=a*b;
    printf("%d\n",c);
}
void mod()
{
    int a,b,c;
    printf("etner the vlaue of A: ");
    scanf("%d",&a);
    printf("enter the value of B: ");
    scanf("%d",&b);
    c=a%b;
    printf("%d\n",c);
}
int main()
{
    int a,b,c,d;
   printf("1.addition\n");
   printf("2.subtract\n");
   printf("3.divide\n");
   printf("4.multiply\n");
   printf("5.modulus\n");
    printf("enter your choice:");
    scanf("%d",&c);
   switch (c)
   {
   case 1:  sum();
    break;
    case 2: sub();
    break;
    case 3: divi();
    break;
    case 4: mul();
    break;
    case 5: mod();
    break;
    default :
    printf("invalid input:");
    break;
   }
return 0;
}