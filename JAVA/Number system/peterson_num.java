import java.util.*;
public class peterson_num {
    public static void main(String [] args)
    {
        int a,b,i,f=1,r,e=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        i=a;
       while(a>=1)
       {
        r=a%10;
        b=r;
        for(i=1;i<=b;i++)
        {
            f=f*i;
        }
        e=e+f;
        f=1;
        a=a/10;
       }
       System.out.println(e);

       if(i==e)
       {
        System.out.println("this is a peterson number:-");
       }
       else
       {
        System.out.println("this is not a peterson number:-");
       }

    }
    
}
