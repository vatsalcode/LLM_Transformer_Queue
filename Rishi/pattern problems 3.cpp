//To print a pattern like this
/*
    A           catch: char ch='A';
   ABA                    ch++;   
  ABCBA                   cout<<ch;
 ABCDCBA           output------B
   */

#include <iostream>
using namespace std;
int main()
{
    int rows;
    char ch='A';
    cout<<"Enter no of rows you want: ";
    cin>>rows;
   for (int i = 1; i <= rows; i++)
   {
     for (int j = 1; j <= rows-i; j++)
     {
       cout<<" ";
     }
     for (int k = 1; k <= i; k++)
     {
       cout<<ch;
       ch++;
     }
     ch--;
     for (int l = i-1; l >= 1; l--)
     {
       --ch;
       cout<<ch;
     }
     ch='A';
     cout<<endl;
     
   }
   

    return 0;
}
