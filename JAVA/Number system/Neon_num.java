import java.util.*;
public class Neon_num {
    public static void main(String[] args)
    {
        int a,b,r,c=0,d=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter the number");
        a=s.nextInt();
        b=a*a;
        while(b>=1)
        {
            r=b%10;
            c=c+r;
            b=b/10;
            if(c==a)
            {
                d++;
            }
        }
        if(d>=1)
        {
            System.out.println("this is a neon number:-");
        }
        else
        {
            System.out.println("this is not a neon number:-");
        }
        }}
