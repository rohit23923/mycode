import java.util.*;
public class armstrong_num {
    public static void main(String [] args)
    {
        int a,b,r,e=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        b=a;
        while(a>=1)
        {
            r=a%10;
            a=a/10;
            
            e=e+r*r*r;

        }
        if(e==b)
        {
            System.out.println("this is a armstong number:-");
        }
        else
        {
            System.out.println("this is not a armstrong number:-");
        }
    }
    
}
