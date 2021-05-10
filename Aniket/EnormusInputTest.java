package com.company;

import java.util.Scanner;

public class EnormusInputTest {
    public static void main(String[] args)
    {
        int c=0,n=0,k=0,ti=0;
        Scanner console=new Scanner(System.in);
        if(console.hasNextInt())
            n= console.nextInt();
        if(console.hasNextInt())
            k=console.nextInt();
        if(n>Math.pow(10,7))
            n=0;
        if(k>Math.pow(10,7))
            k=0;
            for(int i=0;i<n;i++)
            {
                if(console.hasNextInt())
                    ti=console.nextInt();
                if(ti>Math.pow(10,9))
                    ti=0;
                if(ti%k==0)
                    c+=1;
            }
        System.out.println(c);
    }
}
