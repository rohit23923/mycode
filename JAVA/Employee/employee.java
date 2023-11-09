import java.util.*;
class emp
{
    String n;
    int a,b;
    Scanner s=new Scanner(System.in);
    public void input()
    {
        
        System.out.println("WELCOME TO COMPANY MANEGEMENT SYSTEM:-");
        System.out.print("enter the name of employee:- ");
        n=s.nextLine();
        System.out.print("enter the id no. of employee:- ");
        a=s.nextInt();
        System.out.print("enter the salary of the employee:- ");
        b=s.nextInt();
    }
    public void emp_detail()
    {
        System.out.println("name\tid no.\tsalary");
        System.out.print(n+"\t"+a+"\t"+b);
        
    }

}
public class employee {

    public static void main(String[] args)
    {
        emp e=new emp();
        e.input();
        e.emp_detail();

    }
}