//Program to find the mathematical table
class mathematical_table
{
    public static void main(String args[])
    {
        int i,j,k;
        for(i=1;i<=20;i++)
        {
            for(j=1;j<=20;j++)
            {
                k=i*j;
                System.out.println(+i+"*"+j+"="+k);
            }
        }
    }
}
