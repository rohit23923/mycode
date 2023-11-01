import java.util.*;
public class Duplicate {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("enter a  Array:");
        int[] a=new int[5];
        int i,j;
        for(i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        for(i=0;i<a.length;i++)
        {
            int c=1;
            for(j=i+1;j<a.length;j++)
            {
                if(a[j]!=-1)
                {
                    if(a[i]==a[j])
                    {
                        c++;
                        a[j]=-1;
                    }
    
                }   
            }
            if(c>1)
            {
                System.out.println(a[i]+" is Duplicat :- "+c);
               
            }
            
           
        } 
    }
    
}
