import java.io.*;
class calculator extends pattern_fourth
{
    public static void main(String args[]) throws IOException
    {
        double a,b,result;
        result=0;
        int choice;
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader input= new BufferedReader(reader);
        System.out.print("Enter First Number::");
        String v1= input.readLine();
        a= Double.parseDouble(v1);
        System.out.println("Enter the second Number::");
        String v2 =input.readLine();
        b=Double.parseDouble(v2);
        System.out.println("Enter operator(+,-,*,/)::");
        System.out.println("Enter 1 for addition +");
        System.out.println("Enter 2 for substraction -");
        System.out.println("Enter 3 for Multiplication *");
        System.out.println("Enter 4 for division /");
        String n = input.readLine();
        choice= Integer.parseInt(n);
        if(choice==1)
        {
            result = a+b;
            System.out.println("Result ="+result);
        }
        else if (choice==2){

            result = a-b;
            System.out.println("Result ="+result);
        }
        else if (choice==3)
        {
            result= a*b;
            System.out.println("Result ="+result);
        }
        else if (choice==4){
            result=a/b;
            System.out.println("Result ="+result);
        }
        else 
            System.out.println("It is a wrong choice");
    }
}
