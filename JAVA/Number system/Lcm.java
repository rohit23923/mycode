import java.util.*;
public class Lcm {
    public static void main(String[] args){
        int a,b,i,c=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a first number:-");
        a=s.nextInt();
        System.out.println("enter a second number:-");
        b=s.nextInt();
        for(i=2;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
            {
                c=i;
                break;
            }
        }
        System.out.println("LCM is:- "+c);

    }
}
