// to print the pattern
//1
//121
//12321
//1234321
//123454321

class pattern_third
{ 
    public static void main (String args[])
    {
        int j,k,t;
     
    for(t=1;t<=5;t++)
    {
        for(j=1;j<=t;j++)
        System.out.print(+j);
        if(t>=2)
        {
            for(k=j-2;k>=1;k--)
            System.out.print(+k);
        }
        System.out.println("");
    }
}
}
