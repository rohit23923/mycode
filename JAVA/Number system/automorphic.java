import java.util.*;
public class automorphic {
    public static void main(String[] args)
    {
        int a,b,c,d=0,r,i=0,j=0,e=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        b=a;
        c=a*a;
       while(a>=1)
       {
        r=a%10;
        a=a/10;
        d++;
       }
       System.out.println("total nusmer is:"+d);
       int[] ar=new int[d];

       while(b>=1)
       {
        r=b%10;
        b=b/10;
        ar[i]=r;
        i++;
       }
       int[] br=new int[d];
       while(c>=1)
       {
        if(j>d-1)
        {
            break;
        }
        r=c%10;
        c=c/10;
        br[j]=r;
        j++;
        
       }
       
       for(i=0;i<d;i++)
       {
        if(ar[i]==br[i])
        {
            e++;
        }
       }
       if(e==d)
       {
        System.out.println("this is a automorphic number:");
       }
       else
       {
        System.out.println("this is not a automorphic number:");
       }

    }
}
