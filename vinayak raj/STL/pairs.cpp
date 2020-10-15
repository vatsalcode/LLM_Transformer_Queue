#include<utility>
#include<iostream>

using namespace std;

#define speed; ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    speed;
    pair<int ,int > p1={10,20};
    pair<int ,string> p2={30,"vik"};

    cout<<p1.first<<" "<<p1.second<<endl;

    cout<<p2.first<<" "<<p2.second<<endl;

    return 0;
}
