import java.util.*;
public class Frequence {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter a Array");
        int[] a=new int[5];
        int i;
        int j;
        for(i=0;i<5;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            int b=1;
            if(a[i]!=-1)
            {
                for(j=i+1;j<a.length;j++)
                {
                    if(a[i]==a[j])
                    {
                        b++;
                        a[j]=-1;
                    }

                }
                System.out.println(a[i]+"Frequence is : "+b);
            }
        }

    }
    
}
