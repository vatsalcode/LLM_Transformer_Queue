//To print a fibonacci triangle
/*
1
1 1
1 1 2 
1 1 2 3
*/

#include<iostream>
using namespace std;

int fibonacci_series(int number){
int a =number;
if (a==1 || a==2)
{
    return 1;
}
return fibonacci_series(a-1)+fibonacci_series(a-2);
}

int  main(){
    int rows;
    cout<<"This is the programme to print fibonacci triangle"<<endl<<endl;
    cout<<"Enter no of rows: "<<endl;
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
          cout<< fibonacci_series(j+1)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
