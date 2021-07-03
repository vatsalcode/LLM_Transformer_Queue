#include<bits/stdc++.h>
using namespace std;
void findFact(int n)
{
    cout<< n == 1 ? 1 : n * findFact(n - 1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	n=(a-b)*b;
	findFact(n);
}
