import java.util.*;
public class fibonacci_series {
    public static void main(String[] args)
    {
        int a,b=0,c=1,d=0,i;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:-");
        a=s.nextInt();
        System.out.println("fibonacci series is :-");
        for(i=2;i<=a;i++)
        {
            d=b+c;
            System.out.println(d);
            b=c;
            c=d;
        }
        
    }
    
}
