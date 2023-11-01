import java.util.*;
public class Evil_num {
    public static void main(String[] args){
        int a,c=0,r=0;
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number:-");
        a=s.nextInt();
        while(a>0)
        {
            r=a%2;
            if(r==1)
            {
                c++;
            }
            a=a/2;
        }
        if(c%2==0)
        {
            System.out.println("it is Evil number:-");
        }
        else
        {
            System.out.println("it is not a Evil number:-");
        }

    }
    
}
