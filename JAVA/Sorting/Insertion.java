import java.util.*;
public class Insertion {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter Array");
        int[] a=new int[9];
        int i,j,k;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length-1;i++)
        {
            for(j=i+1;j>0;j--)
            {
                if(a[j]<a[j-1])
                {
                    k=a[j-1];
                    a[j-1]=a[j];
                    a[j]=k;
                }
                 

            }
        }
        System.out.println("Elemet arrenge sucessfully:");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
    }
    
}
