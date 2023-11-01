import java.util.*;
public class buzz_num {
    public static void main(String[] args){
        int a,r;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        a=s.nextInt();
        if(a%7==0)
        {
            System.out.println("it is a buzz number:-");
        }
        else
        {
            r=a%10;
            if(r==7)
            {
                System.out.println("it is a buzz number:-");
            }
            else
            {
                System.out.println("it is not a buzz number:-");
            }
        }
    }
    
}
