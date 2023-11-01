import java.util.*;
public class Right_Rotation {
    public static void main(String[] args)
    {
        int i,b=0,j;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a Array");
        int[] a=new int[5];
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        System.out.println("Enter digit's of Element which you want to rotate:");
        int c=s.nextInt();
        
        for(j=1;j<=c;j++)
        {

            b=a[0];
            for(i=0;i<a.length-1;i++)
            {
                a[i]=a[i+1];
           
            }
            a[a.length-1]=b;
        }
        System.out.println("Array Rotate successfully:");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
    
}
