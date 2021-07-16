#include <bits/stdc++.h>

using namespace std;


int main() {
     
    int t,i;
    string s;
    stack<char>a;
    cin>>t;
    while(t--){
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='(')
                a.push(s[i]);
            else if(s[i]=='{')
                a.push(s[i]);
            else if(s[i]=='['){
                a.push(s[i]);
            }
            else if(s[i]==')'){
                if(!a.empty()){
                if(a.top()=='(')
                    a.pop();
                else 
                    break;
                }
                else
                    break;
            }
            else if(s[i]=='}'){
                if(!a.empty()){
                    if(a.top()=='{')
                    a.pop();
                else 
                    break;
                }
                else
                    break;
            }
            else if(s[i]==']'){
                if(!a.empty()){
                if(a.top()=='[')
                    a.pop();
                else 
                    break;
                }
                else
                    break;
            }
        }
        
        if(a.empty()&&i==s.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        while(!a.empty()){
            
            a.pop();
        }
    }
    return 0;
}
