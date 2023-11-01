import java.util.*;
public class Largest_Element {
    public static void main(String [] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter a Array");
        int[] a=new int[5];
        int i,j,max=0;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            for(j=i+1;j<a.length;j++)
            {
                if(a[j]>a[i])
                {
                    max=a[j];
                }
            }
        }
        System.out.println("largest number is :- "+max);
    } 
    
}
