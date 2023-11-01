import java.util.*;
class palendrom_number 
{
    public static void main(String[] args) 
    {
        int a,b,c=0,r;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter number");
        a=sc.nextInt();
        b=a;
        while (a>=1)
        {
            r=a%10;
            c=c*10+r;
            a=a/10;

        }
        System.out.println(c);
        if(c==b)
        {
            System.out.println("this is a palindrom number");
        }
        else
        {
            System.out.println("this is not a palindrom number");
        }
        
    }
}
