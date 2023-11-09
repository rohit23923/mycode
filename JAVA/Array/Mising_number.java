import java.util.*;
public class Mising_number {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter the elements in continues series:-");
        int[] ar=new int[5];
        int i,j=0,sum=0,d=0;
        for(i=0;i<ar.length;i++)
        {
            ar[i]=s.nextInt();
        }
        j=ar[0];
        for(i=0;i<ar.length;i++)
        {
            sum=sum+ar[i];
        }
        int sum1=0;
        for(i=j;i<=ar[ar.length-1];i++)
        {
            sum1=sum1+i;
        }
        d=sum1-sum;
        System.out.println("Missing number is:- "+d);

    }
    
}
