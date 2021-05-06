import java.util.*;
class CalendarProgram
{
    
    int findMaxDay(String mname, int y)
    {
        String months[] = {"","January", "February", "March", "April", "May", "June", 
                            "July", "August", "September", "October", "November", "December"};
        int D[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
         
        if((y%400==0) || ((y%100!=0)&&(y%4==0)))
        {
            D[2]=29;
        }
        int max = 0;
        for(int i=1; i<=12; i++)
        {
            if(mname.equalsIgnoreCase(months[i]))
            {
                max = D[i]; 
            }
        }
        return max;
    }
     
    
    int findDayNo(String wname)
    {
        String days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", 
                            "Saturday"};
        int f = 0;
        for(int i=0; i<7; i++)
        {
            if(wname.equalsIgnoreCase(days[i]))
            {
                f = i;  
            }
        }
        return f;
    }
     
    
    void fillCalendar(int max, int f, String mname, int y)
    {
        int A[][] = new int[6][7];
        int x = 1, z = f;
     
        for(int i=0;i<6;i++)
        {
            for(int j=f; j<7; j++)
            {
                if(x<=max)
                {
                    A[i][j] = x;
                    x++;
                }
            }
            f = 0;
        }
         
        for(int j=0; j<z; j++) 
        {
            A[0][j]=A[5][j];
        }    
         
        printCalendar(A, mname, y); 
    }
     
    //Function for printing the calendar
    void printCalendar(int A[][], String mname, int y)
    {  
        System.out.println("\n\t----------------------------------------------------");
        System.out.println("\t\t\t   "+mname+" "+y); 
        System.out.println("\t----------------------------------------------------"); 
        System.out.println("\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT");
        System.out.println("\t----------------------------------------------------"); 
         
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 7; j++)
            {
                if(A[i][j]!=0)
                    System.out.print("\t "+A[i][j]);
                else
                    System.out.print("\t ");
            }
            System.out.println("\n\t----------------------------------------------------"); 
        }
    }
     
    public static void main(String args[])
    {
        CalendarProgram ob = new CalendarProgram();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the year : ");
        int y = sc.nextInt();
        System.out.print("Enter the month name (e.g. January) : ");
        String mname = sc.next();
        System.out.print("Enter the week day name (e.g. Sunday) of 1st day of "+mname+" : ");
        String wname = sc.next();
         
        int max = ob.findMaxDay(mname,y);
        int f = ob.findDayNo(wname);        
        ob.fillCalendar(max,f,mname,y);
    }
}
