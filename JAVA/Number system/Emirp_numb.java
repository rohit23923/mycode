import java.util.*;
public class Emirp_numb {
    public static void main(String[] args)
    {
        int a,b=0,c=0,d=0,i,r=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:-");
        a=s.nextInt();
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                c++;
            }
        }
        if(c>0)
        {
            System.out.println("it is not a prime number:-");
        }
        else
        {
            System.out.println("it is a prime number:-");
            while(a>=1)
            {
                r=a%10;
                b=b*10+r;
                a=a/10;
            }
            System.out.println(b);
            for(i=2;i<=b/2;i++)
            {
                if(b%i==0)
                {
                    d++;
                }

            }
            if(d==0)
            {
               System.out.println("it is Emirp number:-");   
            }
            else
            {
               System.out.println("it is not a Emirp number:-");
            }
        }
    }
    
}
