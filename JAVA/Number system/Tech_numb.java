import java.util.*;
public class Tech_numb {
public static void main(String[] args)
{
    int a,b=0,c,r,t=0,u=0;
    Scanner s=new Scanner(System.in);
    System.out.println("enter a number:-");
    c=s.nextInt();
    a=c;
    while(a>=1)
    {
        b++;
        a=a/10;
    }
    System.out.println("total number of digits is:-"+b);
    if(b%2==0)
    {
        a=c;
        while(a>=1)
        {
            r=a%100;
            t=t+r;
            a=a/100;
        }
       
    }
    else
    {
        System.out.println("Plese enter the even number of digits value:-");
    }
    u=t*t;
    if(u==c)
    {
        System.out.println("this is a Tech number:-");
    }
    else
    {
        System.out.println("this is not a Tech number:-");
    }



}
}
