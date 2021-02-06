1) Learned about arrays
2) Pointers in arrays

#include<iostream>
using namespace std;
int main()
{

int marks[4]={23,24,25,26};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

for(int i=0;i<4;i++)
{
    cout<<marks[i];
}


return 0;

}
