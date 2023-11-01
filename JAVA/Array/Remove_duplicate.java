import java.util.*;
public class Remove_duplicate {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter the size of array");
        int a=s.nextInt();
        int[] ar=new int[a];
        int i,j,c=0;
        System.out.println("enter the elements of array");
        for(i=0;i<a;i++)
        {
            ar[i]=s.nextInt();
        }
        for(i=0;i<a;i++)
        {
            c=1;
            for(j=i+1;j<a;j++)
            {
                
                if(ar[i]==ar[j])
                { 
                   int k=j;
                    c++;
                    while(k<a-1)
                    {
                        ar[k]=ar[k+1];
                        k++;
                    }
                    a--;
                }

            }

        }
        System.out.println("Remove Duplicate element Successfully:-");
        for(i=0;i<a;i++)
        {
            System.out.println(ar[i]);
        }

    }
    
}