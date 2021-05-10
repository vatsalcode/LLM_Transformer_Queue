#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int i,j,row,col;cin>>row>>col;

    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
  *****
  *****
  *****
  *****
  *****
 */
