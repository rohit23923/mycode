import java.util.*;
public class Fascinating_num 
{
    public static void main(String[] args)
    {
        int a,c=0,e=0,j=0,k=0,m=0,n=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        c=a*2;
        System.out.println(c);
        e=a*3;
        System.out.println(e);
        String g=Integer.toString(a);
        String h=Integer.toString(c);
        String i=Integer.toString(e);
        g=g+h+i;
        System.out.println(g);
        m=g.length();
        System.out.println("length of string is:"+m);
        for(j=0;j<g.length()-1;j++)
        {
            for(k=j+1;k<g.length();k++)
            {
                if(g.charAt(j)==g.charAt(k))
                {
                    n++;
                    break;
                }
            }
            if(n>0)
            {
                break;
            }
        }
        if(n>0)
        {
            System.out.println("this is not a fascinating number:");
        }
        else
        {
            System.out.println("this is a fasinating number:");
        }


    }
}
