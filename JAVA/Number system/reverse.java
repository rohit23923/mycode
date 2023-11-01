import java.util.*;
public class reverse {
    public static void main(String [] args)
    {
        int i;
        int[] a=new int[5];
        Scanner s=new Scanner(System.in);
        System.out.println("Enter numbers");
        for(i=0;i<=4;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<=4;i++)
        {
             System.out.println(a[i]);
        }
        System.out.println("Reverse number:-");
        for(i=4;i>=0;i--)
        {
            System.out.println(a[i]);
        }
       
    }
    
}
