import java.util.*;
public class Roman_To_int{
    public static void main(String [] args)
    {
        int z=0,sum=0,cur=0;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter elements");
        String st=s.nextLine();
        System.out.println(st);
        for(int i=st.length()-1;i>=0;i--)
        {
            if(st.charAt(i)=='I')
            {
                z=1;
            }
            else if(st.charAt(i)=='V')
            {
                z=5;
            }
            else if(st.charAt(i)=='X')
            {
                z=10;
            }
            else if(st.charAt(i)=='L')
            {
                z=50;
            }
            else if(st.charAt(i)=='C')
            {
                z=100;
            }
            else if(st.charAt(i)=='D')
            {
                z=500;
            }
            else if(st.charAt(i)=='M')
            {
                z=1000;
            }

            if(z<cur)
            {
                sum= sum-z;
            }
            else{
                sum=sum+z;
            }
            cur=z;

        }
        System.out.println(sum);
    }
}