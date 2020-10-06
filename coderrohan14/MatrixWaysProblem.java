/**
 * AUTHOR - coderrohan14
 * -> No. of ways to reach from top left to bottom right in given matrix of "a" rows and "b" columns.
 *  ****** Using Recursion *******
 */

import java.util.*;
import java.io.*;
public class RecursionWaysProblem {

	public static void main(String[] args)  {
	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt(),b=sc.nextInt();
	int n = ways(a,b,0,0);
	System.out.println(n);

}
	static int ways(int a,int b,int pt1,int pt2) {
		if(a==2&&b==2) {
			return 2;
		}
		if(pt1==a-1&&pt2==b-1) {
			return 2;
		}
		if(pt1==a-1&&pt2!=b-1)
			return 1;
		if(pt2==b-1&&pt1!=a-1)
			return 1;
		return ways(a,b,pt1+1,pt2) + ways(a,b,pt1,pt2+1);
	}
}
