import java.util.*;
public class Dscending_order {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter a Array");
        int[] a=new int[7];
        int i,j,b;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[i]<a[j])
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                }
            }
            System.out.println("Dscending order is:- "+a[i]);
        }
    }
    
}
