import java.util.*;
public class Xylem_Phloem {
    public static void main(String[] args){
        int a,b=0,c=0,r=0,i=0,j=1,sum=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        
        a=s.nextInt();
        int d=a;
        while(a>=1)
        {
            r=a%10;
            b++;
            a=a/10;
        }
        System.out.println(b);
        int ar[]=new int[b];
        a=d;
        while(a>=1)
        {
            r=a%10;
            ar[i]=r;
            i++;
            a=a/10;
        }
        for(i=0;i<=b-1;i++)
        {
            System.out.println(ar[i]);
        }
        c=ar[0]+ar[b-1];
        System.out.println("sum of extreme: "+c);
        for(j=1;j<=b-2;j++)
        {
            sum=sum+ar[j];
        }
        System.out.println(sum);
        if(c==sum)
        {
            System.out.println("it is a Xylem number");
        }
        else
        {
            System.out.println("it is phloem number");
        }
    }

}
