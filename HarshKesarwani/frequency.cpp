#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    int l=str.length();
    for(char x='A';x<='Z';x++)
    {
        int c=0;
        for(int y=0;y<l;y++)
        {
            if(str[y]==x)
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<x<<"  :  "<<c<<endl;
        }
    }
    
    return 0;
}
