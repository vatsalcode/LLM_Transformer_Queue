#include<utility>
#include<iostream>

using namespace std;

#define speed; ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    speed;

    pair<int ,int > p1(1,2),p2(3,23);

    cout<<(p1==p2)<<" "
        <<(p1!=p2)<<" "
        <<(p1<p2)<<" "
        <<(p1>p2)<<" "<<endl;

    return 0;
}
