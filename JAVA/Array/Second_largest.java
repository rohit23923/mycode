import java.util.*;
public class Second_largest {
    
    public static void main(String [] args)
    {
        int i,n,slarge=0,largest=0,j;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the size of array");
        n=s.nextInt();
        System.out.println("Enter the array's elements");
        int[] a=new int[n];
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length-1;i++)
        {
           for(j=1;j<a.length-1;j++)
           {
                if(a[i]>a[j])
                {
                    slarge=largest;
                    largest=a[i];  
                } 
           } 
        }
        System.out.println("Second largest element is " + slarge);
    }
}
