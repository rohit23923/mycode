import java.util.*;
public class Searching {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter Array");
        int[] ar=new int[6];
        int i,j,k=0;
        for(i=0;i<ar.length;i++)
        {
            ar[i]=s.nextInt();
        }
        System.out.println("enter the element which you want to search:");
        j=s.nextInt();
        for(i=0;i<ar.length;i++)
        {
            if(ar[i]==j)
            {
                k++;
                break;
            }
        }
        System.out.println("index number is "+i+"and element is "+ar[i]);
    }
    
}
