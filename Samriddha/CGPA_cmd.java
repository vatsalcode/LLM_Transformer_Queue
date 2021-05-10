class CGPA
{
  public static void main(String args[])
  {
     int n;
 
     n=args.length;
 
     double marks[]=new double[n];
 
     double grade[]=new double[n];
 
     double cgpa,sum=0;
 
     for(int i=0;i<n;i++)
     {
       marks[i]=Long.parseLong(args[i]);
     }
 
     for(int i=0;i<n;i++)
     {
       grade[i]=(marks[i]/10) ;
     }
 
     for(int i=0;i<n;i++)
     {
       sum+=grade[i];
     }
 
      cgpa=sum/n;
 
      System.out.println("cgpa="+cgpa);
 
      System.out.println("percantage from cgpa="+cgpa*9.5);
 
   }
}
