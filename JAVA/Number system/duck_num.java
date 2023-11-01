import java.util.*;
public class duck_num {
    public static void main(String[] args){
        int i=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a nuber:-");
        String a=s.nextLine();
        for(i=0;i<a.length();i++)
        {
            if(a.charAt(0)=='0')
            {
                System.out.println("it is not a duck number:-");
                break;
            }
            else
            {
                if(a.charAt(i)=='0')
                {
                    System.out.println("it is a duck number:-");
                    break;
                }
            }
           
            
        }
        


    }
    
}
