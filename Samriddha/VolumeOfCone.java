class VolumeOfCone 
{
      
   public static void main(String args[]) 
    {   
       
	
            	Scanner s= new Scanner(System.in);
         	System.out.println("Enter the radius of cone:");
         	double r=s.nextDouble();
                System.out.println("Enter the height of cone:");
         	double h=s.nextDouble();
	
       
                 double  volume=(22*r*r*h)/(3*7);
 
             System.out.println("Volume Of Cone is:" +volume);
       
 
       
          
   }
}
