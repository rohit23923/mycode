import java.util.*;
public class Sum {
    public static void main(String [] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of row");
        int a=s.nextInt();
        System.out.println("Enter the number of column");
        int b=s.nextInt();
        int[][] ar=new int[a][b];
        int i,j,d=0,e=0;
        System.out.println("Enter the elements:-");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                ar[i][j]=s.nextInt();
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                System.out.print(ar[i][j]);
            }
            System.out.println();
        }
        System.out.println("****NOTE===ORDER OF BOTH MATRIX  SHOULD BE EQUAL****");
        System.out.println("Enter the number of row");
        d=s.nextInt();
        System.out.println("Enter the number of column");
        e=s.nextInt();
        if(a==d&&b==e)
        {
           
            int[][] br=new int[d][e];
            System.out.println("Enter Second Array Elements:-");
            for(i=0;i<d;i++)
            {
                for(j=0;j<e;j++)
                {
                    br[i][j]=s.nextInt();
                }
            }
            for(i=0;i<d;i++)
            {
                for(j=0;j<e;j++)
                {
                    System.out.print(br[i][j]);
                }
                System.out.println();
            }
            System.out.println("The sum of two Array is :-");
            int[][] cr=new int[d][e];
            for(i=0;i<d;i++)
            {
                for(j=0;j<e;j++)
                {
                    System.out.print(cr[i][j]=ar[i][j]+br[i][j]);
                }
                System.out.println();
            }
        }
        else
        {
            System.out.println("***WARNING***=ORDER NOT MATCH");
        }
        
        

    }
    
}
