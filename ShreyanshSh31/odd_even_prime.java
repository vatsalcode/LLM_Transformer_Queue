class odd_even_prime
{
    public static void main (int number)
    {
        int i;
        int count =0;
        System.out.println("Enter a number=");
        if(number%2==0)
        System.out.println("The Number is even");
        else
        System.out.println("The number is odd");
        if(number ==1)
        System.out.println("The number is also a prime number");
        for (i=2;i<=number/2;++i)
        {
            if(number%i==0)
            count ++;
        }
        if(count>0)
        System.out.println("Not Prime");
        else
        System.out.println("Prime Number");
    }
}
