package com.company;

import java.io.*;
public class CVDRN {
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = 0;
        String input = "";
        int[] testArray = new int[4];
        int flag = 0;
        try {
            t = Integer.parseInt(br.readLine());
        } catch (NumberFormatException nfe) {
            t = 0;
        }
        if (t < 1 || t > 1000)
            t = 0;
        if (t > 0) {
            String[] result = new String[t];
            for (int i = 0; i < t; i++) {
                input = br.readLine();
                input = input + " ";
                int l = input.length();
                String para = "";
                for (int j = 0; j < l; j++) {

                    char ch = input.charAt(j);
                    if (ch != ' ') {
                        para += ch;
                    } else if (ch == ' ') {
                        testArray[flag] = Integer.parseInt(para);
                        flag += 1;
                        para = "";
                    }
                }
                flag = 0;
                if (testArray[0] < 1 || testArray[0] > 1000)
                    testArray[0] = 0;
                if (testArray[1] < 0 || testArray[1] > 1000)
                    testArray[1] = 0;
                if (testArray[2] < 0)
                    testArray[2] = 0;
                if (testArray[3] > (testArray[0] - 1))
                    testArray[3] = 0;
                result[i] = check(testArray[0], testArray[1], testArray[2], testArray[3]);
            }
            for (int i = 0; i < 2; i++) {
                System.out.println(result[i]);
            }
        }
    }
    public static String check(int N,int K,int X, int Y){
        String test="NO";
        for(int i=0;i<N;i++){
            if(X==Y)
               test="YES";
            X=(X+K)%N;
        }
        return test;
    }
}
