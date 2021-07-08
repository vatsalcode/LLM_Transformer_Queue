//to predict the date after a number of days from the current date
import java.util.*;
class date
{
public void fu()
{
int S=0;
Scanner sc= new Scanner(System.in);
System.out.println(" enter the day,month,year");
int dd = sc.nextInt();
int mm = sc.nextInt();
int yyyy= sc.nextInt();
System.out.println(" enter the number of days");
int days= sc.nextInt();
int md[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
if(yyyy%4==0)
md[2]++;
if(dd>md[mm]||mm>12)
{
System.out.println(" invalid input");
}
else
{
S= dd + days;
while(S> md[mm])
{
S=S-md[mm];
mm++;
if(mm==13)
{
mm=1;
yyyy++;
}
}
System.out.println(S+"/"+ mm+"/"+yyyy);
}
}
}
