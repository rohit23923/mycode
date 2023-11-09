import java.util.*;
public class number_with_star {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=5;j>=1;j--)
            {
                if(i==j)
                {
                    System.out.print(" * ");
                }
                else
                {
                    System.out.print(j);
                }
            }
            System.out.println();
        }
    }
    
}
