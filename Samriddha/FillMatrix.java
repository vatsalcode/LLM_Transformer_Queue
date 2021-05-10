
import java.io.*;
class FillMatrix{
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Matrix size: ");
        int n = Integer.parseInt(br.readLine());
        if(n < 4 || n > 9){
            System.out.println("Size out of range!");
            return;
        }
        char m[][] = new char[n][n];
        System.out.print("First character: ");
        char first = br.readLine().charAt(0);
        System.out.print("Second character: ");
        char second = br.readLine().charAt(0);
        System.out.print("Third character: ");
        char third = br.readLine().charAt(0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    m[i][j] = second;
                else
                    m[i][j] = third;
            }
        }
        m[0][0] = first;
        m[n - 1][n - 1] = first;
        m[0][n - 1] = first;
        m[n - 1][0] = first;
        System.out.println("Resultant Matrix:");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                System.out.print(m[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
