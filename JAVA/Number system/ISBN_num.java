import java.util.*;
public class ISBN_num {
    public static void main(String[] args){
        long a,r=0,sum=0,t=1;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:-");
        a=s.nextLong();
        System.out.println(a);
        while(a>=1)
        {
            r=a%10;
            sum=sum+t*r;
            t++;
            a=a/10;
        }
        if(sum%11==0)
        {
            System.out.println("this is a ISBN number:-");
        }
        else
        {
            System.out.println("this is not a ISBN number:-");
        }

    }
    
}
