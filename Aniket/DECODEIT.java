//code chef problem -Encoded string,Link-https://www.codechef.com/problems/DECODEIT
package com.company;
import java.io.*;
public class DECODEIT {
    public static void main(String[] args)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String alphabet="abcdefghijklmnop";
        int t=0;
        String EString="";

        try{
            t=Integer.parseInt(br.readLine());
        }
        catch(NumberFormatException e){
            t=0;
        }
        if(t<1||t>10)
            t=0;
        String[] res=new String[t];
        for(int i=0;i<t;i++)
            res[i]="";
        for(int i=0;i<t;i++){
          int  N=Integer.parseInt(br.readLine());

          EString=br.readLine();
          int size=N/4;
          for(int j=0;j<size;j++){
                String ts=EString.substring(j*4,j*4+4);


                for(int l=0;l<4;l++) {
                    int nextBit = Integer.parseInt(ts.charAt(l)+"");
                    if (nextBit == 0)
                        alphabet = alphabet.substring(0, alphabet.length() / 2);
                    else if (nextBit == 1)
                        alphabet = alphabet.substring(alphabet.length() / 2, alphabet.length());
                }
                res[i]+=alphabet;
                alphabet="abcdefghijklmnop";
          }
        }
        for(int i=0;i<t;i++){
            System.out.println(res[i]);
        }
    }
}
