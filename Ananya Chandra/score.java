//to count the score of each participant and print the name of participant with highest score
import java.util.*;
class quiz
{
public void fun()
{
Scanner sc= new Scanner(System.in);
System.out.println(" enter the no. of participants");
int N= sc.nextInt();
if(N<3||N>11)
System.out.println(" invalid input");
else
{
String a[][]= new String[N][5];
int score[]= new int[N];
int c;
int high;
for(int i=0;i<N;i++)
{
System.out.println(" enter the answers of participant  " + (i+1));
for(int j=0;j<5;j++)
a[i][j]=sc.next();
}
String ans[]= new String[5];
System.out.println(" enter the answer key");
for(int i=0;i<5;i++)
ans[i]= sc.next();
for(int i=0;i<N;i++)
{
c=0;
for(int j=0;j<5;j++)
{
if(a[i][j].equals(ans[j]))
c++;
}
score[i]=c;
}
System.out.println(" Scores");
for( int i=0;i<N;i++)
{
System.out.println(" participant "+ (i+1)+":"+ score[i]);
}
high=0;
for(int i=0;i<N;i++)
{
if(score[high]<score[i])
high=i;
}
System.out.println(" highest score :participant"+ (high+1));
}
}
}
