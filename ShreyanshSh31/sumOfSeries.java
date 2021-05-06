// to print the sum of series
// x/1!-x^2/2!+x^3/3!..........x^n/n!

class sumOfSeries
{
    public static void main(int n, int x)
    {
    double sum,y;
    int p;
    sum = 0;
    System.out.println("Enter the value of n= ");
    System.out.println("Enter the value of x= ");
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;j<=i;j++)
        {
            p=p*j;
        }
        y= Math.pow(x,i)/p;  // us eof library function
        if(i%2==0)
        sum = sum-y;
        else 
        sum=sum+y;
    }
    System.out.println(sum);
}
}
