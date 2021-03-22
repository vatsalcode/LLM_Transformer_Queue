import java.util.Scanner;
class BinarySearchExample
{
    public static void main(String args[])
    {
        int counter, n, item, array[], start, end, mid;

        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of elements:");
        n = input.nextInt(); 

        array = new int[n];
        System.out.println("Enter " + n + " integers");
        for (counter = 0; counter < n; counter++)
            array[counter] = input.nextInt();

        System.out.println("Enter the search value:");
        item = input.nextInt();
        start = 0;
        end = n - 1;
        mid = (start + end)/2;

        while( start <= end )
        {
            if ( array[mid] < item )
                start = mid + 1;
            else if ( array[mid] == item )
            {
                System.out.println(item + " found at location " + (mid + 1) + ".");
                break;
            }
            else
            {
                end = mid - 1;
            }
            mid = (start + end)/2;
        }
        if ( start > end )
            System.out.println(item + " is not found");
    }
}
