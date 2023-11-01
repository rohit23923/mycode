import java.util.*;
public class sunny_num {
    
    public static void main(String[] args)
    {
        int a,i,k=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:");
        a=s.nextInt();
        a=a+1;
        for(i=1;i<=a/2;i++)
        {
            if(a==i*i)
            {
                k++;
            }
        }
        if(k==1)
        {
            System.out.println("this is a sunny number :-");
        }
        else
        {
            System.out.println("this is not a sunny number :-");
        }

    }
    
}
