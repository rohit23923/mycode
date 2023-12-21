import java.util.*;
public class Zero_arrange {
    public static void main(String[] args)
    {
        int n,i,b,c,j;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the size of array");
        n=s.nextInt();
        int[] a=new int[n];
        System.out.println("Enter the array's element"); 
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }

        System.out.print("which element you want to shift in last");
        b=s.nextInt();

        for(i=0;i<a.length;i++)
        {
            if(b==a[i])
            {
                j=i;
                c=a[i];
               while (i<a.length-1) {
                a[i]=a[i+1];
                i++;
               } 
               a[i]=c;
               i=j;
            }
        }
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
    
}
