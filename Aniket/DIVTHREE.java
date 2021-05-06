//LINK-https://www.codechef.com/problems/DIVTHREE
package com.company;
import java.io.*;
import java.util.StringTokenizer;

class DIVTHREE {
    public static void main(String[] args)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        int out=0;
        for(int i=0;i<t;i++){
            StringTokenizer st=new StringTokenizer(br.readLine());
            int N=Integer.parseInt(st.nextToken());
            int K=Integer.parseInt(st.nextToken());
            int D=Integer.parseInt(st.nextToken());
            int p=0;
            StringTokenizer s=new StringTokenizer(br.readLine());
            for(int j=0;j<N;j++){
                p+=Integer.parseInt(s.nextToken());
            }
             out=p/K;
            if(out>D)
                out=D;
            System.out.println(out);
        }

    }
}
