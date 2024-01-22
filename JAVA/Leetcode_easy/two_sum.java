import java.util.*;
public class two_sum {
    int[] getdata(int nums[],int target)
    {
    
        for(int i=0;i<nums.length-1;i++)
        {
            for(int j=1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return new int[]{i,j};
                }
            }
        }    
        return null;

    }
    public static void main(String [] args)
    {
        Scanner s=new Scanner(System.in);
        two_sum g=new two_sum();
        int[] nums=new int[6];
        int i,j,target=12,c=0;
        System.out.println("Enter an array");
        for(i=0;i<nums.length;i++)
        {
            nums[i]=s.nextInt();
        }
       int[] a= g.getdata(nums,target);
       System.out.println("Idicies is");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
    }

}