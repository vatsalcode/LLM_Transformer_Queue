import java.util.*;
class Date
{
    int dat,d1,d2,d3;
    Date()
    {
        dat = d1 = d2 = d3 = 0;
    }
    void accept()
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a date of 6 digits (only).");
        dat = s.nextInt();
    }
    void brek()
    {
        int temp = dat;
        d3 = temp%100;
        temp /= 100;
        d2 = temp%100;
        temp /= 100;
        d1 = temp%100;
    }
    boolean validity()
    {
        if(d1 < 10)
        d1 = d1 % 10;
        if(d2 >= 01 && d2 <= 12)
        {
            if((d2==1) || (d2==3) || (d2==5) || (d2==7) || (d2==8) || (d2==10) || (d2==12))
            {
                if(d1 >= 1 && d1 <= 31)
                return true;
            }
            else if(d2 == 02)
            {
                if(d3 % 4 == 0)
                {
                    if(d1 >= 1 && d1 <= 29)
                    return true;
                    return false;
                }
                else
                {
                    if(d1 >= 01 && d1 <= 28)
                    return true;
                    return false;
                }
            }
            else
            {
                if(d1 >= 1 && d1 <= 30)
                return true;
            }
        }
        return false;
    }
    void print()
    {
        if(validity() == false)
        System.out.println("INVALID DATE.");
        else
        {
            String st = "";
            System.out.println("VALID DATE.");
            String arr[] = {"January","February","March","April","May","June","July","August"
                            ,"September","October","November","December"};
            if(d1 == 1)
            st = d1+"st "+arr[d2-1]+",";
            else if(d1 == 2)
            st = d1+"nd "+arr[d2-1]+",";
            else if(d1 == 3)
            st = d1+"rd "+arr[d2-1]+",";
            else
            st = d1+"th "+arr[d2-1]+",";
            {
                if(d3 < 10)
                st += ("0"+d3);
                else
                st = st + d3;
            }
            System.out.println(st);
        }
    }
    public static void main()
    {
        Date ob = new Date();
        ob.accept();
        ob.brek();
        ob.print();
    }
}
