import java.util.*;
public class Copy_arry {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("enter a Array:");
        int[] a=new int[10];
        int i;
        for(i=0;i<=9;i++)
        {
            a[i]=s.nextInt();
        }
        System.out.println("Arry copied successfully");
        int[] b=new int[a.length];
        for(i=0;i<a.length;i++)
        {
            b[i]=a[i];
        }
        for(i=0;i<a.length;i++)
        {
            System.out.println(b[i]);
        }

    }
    
}
