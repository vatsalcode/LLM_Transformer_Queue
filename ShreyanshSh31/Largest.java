// print the largest number without using if and else
import java.util.*;
class Scratch {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
                int a,b,c,l;
        System.out.println("Enter three numbers");
        a= sc.nextInt();
        b= sc.nextInt();
        c= sc.nextInt();
        l= Math.max(Math.max(a,b),c);
        System.out.println("Largest Number="+l);
    }
}
