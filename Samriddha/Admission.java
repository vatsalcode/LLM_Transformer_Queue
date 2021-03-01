import java.util.*;
class Admission
{
    int Adno[]=new int[100];
    static Scanner sc = new Scanner(System.in);

    Admission() 
    {
        for(int i=0; i<100; i++)
        {
            Adno[i]=0;
        }
    }
    
    void fillArray()throws Exception
    {
        for(int i=0; i<100; i++)
        {
            System.out.print("Enter Admission no of student "+(i+1)+": ");
            Adno[i] = sc.nextInt();
        }
        
        
        int temp=0;
        for(int i=0; i<99; i++)
        {
            for(int j=i+1; j<100; j++)
            {
                if(Adno[i]>Adno[j])
                {
                    temp = Adno[i];
                    Adno[i] = Adno[j];
                    Adno[j] = temp;
                }
            }
        }            
    }
    
    int binSearch(int l, int u, int v) 
    {
        int mid = (l + u)/2;
        if(u < l) 
        {
            return -1;
        } 
        if(v==Adno[mid]) 
        {
            return 1;
        }
        else if(v>Adno[mid]) 
        {
            return binSearch(mid+1,u,v);
        }
        else 
        {
            return binSearch(l,mid-1,v);
        }
    }
    
    public static void main(String args[])throws Exception
    {
        Admission ob = new Admission();
        System.out.println("Enter Admission number in ascending order");
        ob.fillArray();
        System.out.print("Enter an Admission number to search : ");
        int v = sc.nextInt();
        int f = ob.binSearch(0,99,v);
        System.out.println("*****************************");
        if(f == 1)
        {
            System.out.println("Admission Number found");
        }
        else
        {
            System.out.println("Admission Number Not found");
        }
    }
}
