class VolumeOfCone 
{
      
   public static void main(String args[]) 
    {   
       
	        Scanner s= new Scanner(System.in);
         	System.out.println("Enter the radius of cone:");
         	double r=s.nextDouble();
                System.out.println("Enter the height of cone:");
         	double h=s.nextDouble();
	
 
                 double  a=VolumeOfCone.Volume(r,h); 
 
             System.out.println("Volume Of Cone is:" +a);
      }
     public static double Volume(double r,double h) 
    {   
       
	
	
       
                 double  a=(22*r*r*h)/(3*7);
      
 
                  return a;
      }
 
 
 
 
      
 
}
