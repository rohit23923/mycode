import java.util.*;
public class Bubble {
public static void main(String[] args)
{
    Scanner s=new Scanner (System.in);
    System.out.println("enter Array");
    int[] a=new int[6];
    int i,j,k;
    for(i=0;i<a.length;i++)
    {
        a[i]=s.nextInt();
    }
    for(i=0;i<a.length;i++)
    {
       for(j=0;j<a.length-i-1;j++)
       {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
       }
    }
    System.out.println("Element arrenge sucessfully:");
    for(i=0;i<a.length;i++)
    {
        System.out.println(a[i]);
    }
}
    
}
