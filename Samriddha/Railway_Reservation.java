import java.util.*;
public class Railway_Reservation
{
    String tname, tname1, tnum, tnum1, date, date1, Class, Class1, stationfr,
    stationfrintial, stationto, stationto1, returnst, reserveto, app_n,address = "";
    int n = 0;
    long tele=0;

    public void input()
    {

        Scanner sc =  new  Scanner(System.in);

        

        System.out.println("\t Please enter the date of the journey in DD/MM/YYYY format :");
        System.out.print("\t\t");
        date=sc.nextLine();

        while (date.length()!=10)
            {
            System.out.println("\t\t Invalid date of journey. Please enter valid date of journey in the given format");
            System.out.print("\t\t");
            date=sc.nextLine();
            }
            
        
        System.out.println("\t Please enter the date for return in DD/MM/YYYY format :");
        System.out.print("\t\t");
        date1=sc.nextLine();

        while (date1.length()!=10)
        {
            System.out.println("\t\t Invalid date of journey. Please enter valid date of journey in the given format");
            System.out.print("\t\t");
            date1=sc.nextLine();
        }

        
        System.out.println("\t Please enter the initial station of the Train:");
        System.out.print("\t\t");
        stationfr=sc.nextLine();

        System.out.println("\t Please enter the final station of the Train:");
        System.out.print("\t\t");
        stationto=sc.nextLine();

        System.out.println("\t Please enter the station name from where you'll be returning:");
        System.out.print("\t\t");
        returnst=sc.nextLine();

        System.out.println("\t Please enter the staion upto which you want to reserve:");
        System.out.print("\t\t");
        reserveto=sc.nextLine();

        System.out.println("\t Please enter the number of people you want a reservation for: ");
        System.out.print("\t\t");
        n=sc.nextInt();
        sc.nextLine();
                    
        String name[]=new String[n];
        int age[]= new int[n];
        int concess_no[]=new int [n];
        String gender[]= new String[n];
        String choice[]= new String[n];

        System.out.println("\t Please fill up the following details regarding the passengers:");
            System.out.println("\n\t\t\t");
            System.out.println("\n\t\t\t");

        for(int i=0;i<n;i++)
        {
            System.out.println(" \t\t Name should be within 15 characters ");
            System.out.println("\n\t\t\t");

            System.out.println("\t Name: ");
            System.out.print("\t\t");
            name[i]=sc.nextLine();
            
            System.out.println("\t Age: ");
            System.out.print("\t\t");
            age[i]=sc.nextInt();
            sc.nextLine();


            System.out.println("\t Sex(M/F): ");
            System.out.print("\t\t");
            gender[i]=sc.nextLine();
            if(gender[i].equalsIgnoreCase("m") != true && gender[i].equalsIgnoreCase("f") != true)
                {
                    System.out.println("\t Please enter only M or F: ");
                    System.out.print("\t\t");
                    gender[i]=sc.nextLine();
                }
                        
            System.out.println("\t Concession/Travel Authority No. :");
            System.out.print("\t\t");
            concess_no[i]=sc.nextInt();
            sc.nextLine();


            System.out.println("\t Choice if any (Lower/Upper berth Veg./Non- veg. Meal for Rajdhani/ Shatabdi Express Only) :");
            System.out.print("\t\t");
            choice[i]=sc.nextLine();
            


        }

        System.out.println("\t Please enter the name of the train:");
        System.out.print("\t\t");
        tname = sc.nextLine();

        System.out.println("\t Please enter the Train no. :");
        System.out.print("\t\t");
        tnum = sc.nextLine();
        while (tnum.length() != 5)
            {
            System.out.println("\t\t Invalid Train No. Please try again with valid Train No.(A valid train no. constitutes of 5 digits.)");
            System.out.print("\t\t");
            tnum = sc.nextLine();
            }

        System.out.println("\t Please enter the train name for returning: ");
        System.out.print("\t\t");
        tname1=sc.nextLine();

        System.out.println("\t Plese enter the train no.for returning :");
        System.out.print("\t\t");
        tnum1=sc.nextLine();

        while (tnum1.length() != 5) {
            System.out.println("\t\t Invalid Train No. Please try again with valid Train No.(A valid train no. constitutes of 5 digits.)");
            System.out.print("\t\t");
            tnum1 = sc.nextLine();
        }

        

        System.out.println("\t Please enter the class :");
        System.out.print("\t\t");
        Class=sc.nextLine();
        
        System.out.println("\t Please enter the class while returning :");
        System.out.print("\t\t");
        Class1=sc.nextLine();

        System.out.println("\t Please enter the initial station of the train :");
        System.out.print("\t\t");
        stationfrintial=sc.nextLine();

        System.out.println("\t Please enter the final station of the mentioned train :");
        System.out.print("\t\t");
        stationto=sc.nextLine();

        System.out.println("\t Please enter the name of the applicant :");
        System.out.print("\t\t");
        app_n=sc.nextLine();

        System.out.println("\t Please enter your full address :");
        System.out.print("\t\t");
        address=sc.nextLine();

        System.out.println("\t Please enter your mobile no./telephone no. :");
        System.out.print("\t\t");
        tele=sc.nextLong();

        System.out.println("\n"+"\n");

        System.out.println("\t\t\t\t\t\t\t\t EASTERN RAILWAY\t\t\t\t  CM812");
        System.out.println("\n\t\t\t");
        System.out.println("\t\t\t********************************  RESERVATION REQUISITION FORM  ********************************");
        System.out.println("\n\t\t\t");
                        System.out.println("\t\t\t If you are a Medical Practitioner\t\t\t\t\t      ___ \n\t\t\t Please tick ( ) in Box"
                        +"\t\t\t\t\t\t\t  Dr.|___|" + "\n\t\t\t" + "(You could be of help in an emergency)");
        System.out.println();
        
        
        System.out.println("\t\t\tTrain No. & Name- "+tnum+" " +tname+ " \t  Date of Journey- "+date+"\n"+"\t\t\tClass -"+Class+"\t"
                        +"      No. of Berth(s)/Seat(s)- "+n+"\n"+"\t\t\tStation From- "+stationfr+" \t Station To- "+stationto+"\n"+"\t\t\t"
                        +"Boarding At- "+returnst+"\t Reservation Upto- "+reserveto+"\n");
        System.out.println("\t\t\tPassenger Details- "+"\n");
        System.out.println("\t\t\tS.No. \t       Name \t    Sex(M/F) \t  Age \t Concession/Travel Authority No. \t Choices ");
        int c =0;
        for(int j=0;j<n;j++)
        {
            System.out.print("\t\t\t  "+(++c)+"\t     "+name[j]+"\t     "+gender[j]+"\t      "+age[j]+"\t                              "
                        +""+concess_no[j]+"\t      "+choice[j]);
            System.out.println();
        }
        
        System.out.println("\t\t\t________________________________________________________________________________________________");
        System.out.println("\n\t\t\t");

        System.out.println("\t\t\t********************************  ONWARD/RETURN JOURNEY DETAILS  *******************************");
        System.out.println("\n\t\t\t");
        
        System.out.println("\t\t\t Train No. & Name- "+tnum+" " +tname+ "   Date of Journey- "+date1+"\n\t\t\t Class -"+Class1+"\n\t\t\t "
                        +"Station From- "+stationfrintial+" Station To- "+stationto1+"\n\t\t\t Name of Applicant- "+app_n+"\n\t\t\t"
                        +" Address- "+address+"\n\t\t\t Telephone No./Mobile No.- "+tele);

        System.out.println("\t\t\t________________________________________________________________________________________________");
        System.out.println("\n\t\t\t");

                System.out.println("\t\t\t\t\t\t SIGNATURE OF THE APPLICANT/REPRESENTATIVE ");
                System.out.println("\n\t\t\t");
                System.out.println("\t\t\tTelephone No., if any "+tele+"   Date "+date1+"   Time __________");
                System.out.println("\t\t\t                      ------------");
                
        System.out.println("\t\t\t________________________________________________________________________________________________");
        System.out.println("\n\t\t\t");

            System.out.println("\t\t\t\t\t\tFOR OFFICE USE ONLY");
            System.out.println("\n\t\t\t");
            System.out.println("\t\t\t S.No. of Requistion_______________________ PNR No._______________________ \n \t\t\t\t\t"
                        +"Berth/Seat No._______________ Amount collected _____________________________ \n\t\t\t\t\t\t  "
                        +"  _________________________ \n\t\t\t\t\t\t Signature of Reservation Clerk ");


        System.out.println("\t\t\t ________________________________________________________________________________________________");
        System.out.println("\n\t\t\t");

                System.out.println("\t\t\tNote : \n\t\t\t\t 1.Maximum permissible passengers is 6 per requisition.\n" +
                        "\t\t\t      \t 2. One person can give one requisition form at a time.\n" +
                        "\t\t\t      \t 3. Please check your ticket and balance amount before leaving the window.\n" +
                        "\t\t\t      \t 4. Forms not properly filled or in illegible forms shall not be entertained. \n" +
                        "\t\t\t      \t 5. Choice is subject to availability.");


        System.out.println("\t\t\t________________________________________________________________________________________________");

    }
    public static void main(String[] args)
    {
        Railway_Reservation obj= new Railway_Reservation();
        obj.input();
        
    }
}
