import java.util.*;
public class bionary_Search {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter Array ");
        int[] a=new int[6];
        int i,j;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        System.out.println("enter the element which you want to search");
        j=s.nextInt();
        int big,mid,end;
        big=0;
        end=a.length-1;
        while(big<=end)
        {
            
            mid=(big+end)/2;
            
            if(j<a[mid])
            {
                end=mid-1;
            }
            else if(j>a[mid])
            {
                big=mid+1;
            }
            else if(a[mid]==j)
            {
                System.out.println("element found at index:- "+mid+"element is :- "+a[mid]);
                
                break;
            }
        }
    }
    
}
