import java.util.*;
class array
{
    static Scanner sc= new Scanner(System.in);
    static int arr[];
    static int n;
    static int x;
    static int y;
    static int z;

    public static void main(String args[])
    {
        System.out.println("Enter the array length ");
        n= sc.nextInt();
        arr= new int[n];
        System.out.println("Enter the array \n");
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter the element no. "+(i+1));
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter A ");
        x= sc.nextInt();
        System.out.println("Enter B ");
        y= sc.nextInt();
        System.out.println("Enter C ");
        z= sc.nextInt();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(Math.abs(arr[i]-arr[j])>x){
                    continue;
                }
                for(int k=j+1;k<n;k++){
                    if(
                    (Math.abs(arr[j]-arr[k])<=y)&&
                    (Math.abs(arr[i]-arr[k])<=z)
                    )
                    {
                        count++;
                    }
                }
            }
        }
        System.out.println("Number of good triplets are "+count);
    }

}
