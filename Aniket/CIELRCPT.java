//PROBLEM LINK - https://www.codechef.com/problems/CIELRCPT
package com.company;
import java.io.*;

public class TOMYA {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        try {
            t = Integer.parseInt(br.readLine());
        } catch (NumberFormatException e) {
            t = 0;
        }
        for (int i = 0; i < t; i++) {
            int menu;
            int n = Integer.parseInt(br.readLine());
            if (n % 2 != 0) {
                menu = 1;
                n -= 1;
            } else
                menu = 0;
            while (n != 0) {
                int j = 0;
                while (true) {
                    if (j >= 11)
                        break;
                    else if ((int) Math.pow(2, j) == n)
                        break;
                    else if ((int) Math.pow(2, j + 1) > n)
                        break;
                    else if ((int) Math.pow(2, j) < n)
                        j += 1;

                }
                n -= (int) Math.pow(2, j);
                menu += 1;
            }
            System.out.println(menu);
        }
    }
}

