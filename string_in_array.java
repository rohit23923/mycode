import java.util.*;
public class string_in_array {

    int z=0;
    String[] ar=new String[3];
    String get(String[] ar)
    {
        z=ar[0].length();
        for(int i=0;i<ar.length-1;i++)
        {
            int c=0;
            for(int j=0;(j<ar[i].length())&&(j<ar[i+1].length())&&(j<z);j++)
            {
                
                if(ar[i].charAt(j)==ar[i+1].charAt(j))
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c<1)
            {
                break;
            }
            z=c;
        }
        return ar[0].substring(0,z);
        
    }
    
    public static void main(String [] args)
    {
        string_in_array st=new string_in_array();
        Scanner s=new Scanner(System.in);
         String[] a=new String[3];
        for(int i=0;i<a.length;i++)
        {
            a[i]=s.nextLine();
        }
        String k=st.get(a);
        System.out.println(k);
    }   
       
}
