import java.util.*;
public class Selection {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter Array");
        int[] a=new int[6];
        int i,j,c=0;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length-1;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[j]<a[i])
                {
                    c=a[i];
                    a[i]=a[j];
                    a[j]=c; 
                }
            }
        }
        System.out.println("Element arrege in ascending order successfully:");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
    }
    
}
