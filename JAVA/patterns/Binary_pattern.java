import java.util.*;
public class Binary_pattern {
    public static void main(String [] args)
    {
        int i,j;
        Scanner s=new Scanner(System.in);
        int[][] a=new int[5][5];
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if((i+j)%2==0)
                {
                    System.out.print("1");
                }
                else
                {
                    System.out.print("0");
                }
            }
            System.out.println("");
        }
    }
}
