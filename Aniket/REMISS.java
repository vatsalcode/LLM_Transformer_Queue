import java.io.*;
import java.util.*;
public class REMISS {
    public static void main(String[] args)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=0;
        try{
            t=Integer.parseInt(br.readLine());
        }
        catch(NumberFormatException e){
            t=0;
        }
        String[] out=new String[t];
        for (int i=0;i<t;i++){
            StringTokenizer st=new StringTokenizer(br.readLine()," ");
            int A=Integer.parseInt(st.nextToken());
            int B=Integer.parseInt(st.nextToken());
            out[i]=Math.max(A,B)+" "+(A+B);
        }
        for(int i=0;i<t;i++){
            System.out.println(out[i]);
        }
    }
}
