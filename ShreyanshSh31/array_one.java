import java.util.*;
class array_two
{
    static int aa[];
    static int bb[];
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of two array ");
        int n = sc.nextInt();
        aa = new int[n];
        bb= new int[n];
        for(int i = 0;i<n;i++)
        {
            System.out.println("Enter " + (i+1) + " for aa array");
            aa[i]=sc.nextInt();
            System.out.println("Enter " + (i+1) + " for bb array");
            bb[i]=sc.nextInt();
        }        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(aa[i], bb[i]);
        }
        int[] ans = new int[list.size()];
        System.out.print("O/P : [");
        for (int i = 0; i < list.size()-1; i++)
        {
            ans[i] = list.get(i);
            System.out.print(ans[i]+", ");
        }
        System.out.print(list.get(list.size()-1)+"]");
    }
}
