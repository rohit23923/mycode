import java.util.*;
public class prime_number {
    public static void main(String [] args)
    {
        int a,i,c=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                c=1;
                break;
            }

        }
        if(c==0)
        {
            System.out.println("this is a prime number:-");
        }
        else
        {
            System.out.println("this is not a prime number:-");
        }
    }
    
}
