import java.util.*;
class GFG{
  
// Function to print the series
static void printSeries(int n, int a,
                         int b, int c)
{
    int d;
  
    // Generate the ith term and
    // print it
    if (n == 1)
    {
        System.out.print(a + " ");
        return;
    }
    if (n == 2)
    {
        System.out.print(a + " " +  b + " ");
        return;
    }
  
    System.out.print(a + " " +
                     b + " " + 
                     c + " ");
  
    for (int i = 4; i <= n; i++)
    {
        d = a + b + c;
        System.out.print(d + " ");
        a = b;
        b = c;
        c = d;
    }
}
  
// Driver Code
public static void main(String[] args)
{
    int N = 7, a = 1, b = 3;
    int c = 4;
  
    // Function Call
    printSeries(N, a, b, c);
}
}
