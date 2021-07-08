import java.util.Scanner;
class LinearSearchExample
{
    public static void main(String args[])
    {
        int c, n, item, array[];
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of elements:");
        n = input.nextInt(); 
        array = new int[n]; 
        System.out.println("Enter " + n + " integers");

        for (c = 0; c < n; c++)
            array[c] = input.nextInt();
        System.out.println("Enter the value to be searched");
        item = input.nextInt();

        for (c = 0; c < n; c++)
        {
            if (array[c] == item) 
            {
                System.out.println(item+" is present at location "+(c+1));

                break;
            }
        }
        if (c == n)
            System.out.println(item + " doesn't exist in array.");
    }
}
