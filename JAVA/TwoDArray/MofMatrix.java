import java.util.*;
public class MofMatrix {
    public static void main(String[] args)
    {
        Scanner s=new Scanner (System.in);
        int a[][]=new int[3][3];
        int b[][]=new int[3][3];
        int c[][]=new int[3][3];
        System.out.println("enter the elements of 1st matrix");
        int i,j,k,l;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=s.nextInt();
            }
        }
        System.out.println("enter the elments of 2nd matrix");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=s.nextInt();
            }
        }
        System.out.println("1st array is :-");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(a[i][j]);
            }
            System.out.println();
        }
        System.out.println("2nd array is :-");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(b[i][j]);
            }
            System.out.println();
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                for(k=0;k<3;k++)
                {
                   c[i][j]=c[i][j]+a[i][k]*b[k][j];

                    
                }
            }
        }
        System.out.println("third matrix is :-");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(c[i][j]);
            }
            System.out.println();
        }

    }
    
}
