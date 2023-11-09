import java.util.*;
public class X_shape {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.print("enter a odd number for perfect:- X ");
        int a=s.nextInt();
        int i,j;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=a;j++)
            {
                if(i==j||j==a-i+1)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
