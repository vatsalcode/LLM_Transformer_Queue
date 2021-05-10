/***
	Author - coderrohan14
	GFG problem link - https://practice.geeksforgeeks.org/problems/next-happy-number4538/1/?problemStatus=solved&page=1&query=problemStatussolvedpage1 
***/



import java.lang.*;
import java.io.*;
class GFG
 {
	public static void main (String[] args)
	 {
	 //code
	 Scanner sc = new Scanner(System.in);
	 int t = sc.nextInt();
	 String s = "";
	 sc.nextLine();
	 for(int i=0;i<t;i++){
	     int n =sc.nextInt(),ans=0;
	     n++;
	     while(!happyNum(n)){
	         n++;
	     }
	     s+=n;
	     s+="\n";
	 }
	 System.out.println(s);
	 }
	 static boolean happyNum(int n){
	     while(n>0){
	     if(n==1||n==7){
	         return true;
	     }
	     if(n<10){
	         return false;
	     }
	     n = sumSquares(n);
	 }
	 return false;
	 }
	 static int sumSquares(int n){
	     int sum=0;
	     while(n!=0){
	         sum+=Math.pow((n%10),2);
	         n/=10;
	     }
	     return sum;
	 }
	 
}
