#include<iostream>  
#include<cstdlib>  
  
#define ROW 4  
#define COL 2  
  
using namespace std;  
  
void sort(int [][COL]);  
  
int main()  
{  
   int num[ROW][COL];  
   int row,col;  
     
   for(row=0;row<ROW;row++)  
   {  
    for(col=0;col<COL;col++)  
    {  
     cout<<"Enter number at Row "<<row<<" Coloumn " <<col<<" : ";  
     cin>>num[row][col];  
    }  
   }  
      
   sort(num);  
     
   cout<<"\n* list in Assending Order is :\nID     Marks\n";  
     
   for(row=0;row<ROW;row++)  
   {  
    for(col=0;col<COL;col++)  
    {  
     cout<<num[row][col]<<"\t";  
    }  
    cout<<endl;  
   }  
  
   system("pause");  
   return 0;  
  
}  
  
  
void sort(int list[][COL])  
{  
     int out,in,temp,temp2;  
       
       for(out=0;out<ROW-1;out++)  
       {  
        for(in=out+1;in<ROW;in++)  
        {  
         if(list[in][0]<list[out][0])  
         {   
          temp=list[out][0];  
          temp2=list[out][1];  
  
          list[out][0]=list[in][0];  
          list[out][1]=list[in][1];  
  
          list[in][0]=temp;  
          list[in][1]=temp2;  
         }                        
        }  
       }  
}          
