import java.util.*;
public class keth_number {
    public static void main(String[] args)
    {
        int a,r,i=0,j=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:-");
        a=s.nextInt();
        int[] b=new int[10];
        while(a>=1)
        {
        r=a%10;
        b[i]=r;
        i++;
        a=a/10;
        }
        for(j=0;j<=i-1;j++)
        {
            System.out.println(b[j]);
        }
       

    }
    
}
