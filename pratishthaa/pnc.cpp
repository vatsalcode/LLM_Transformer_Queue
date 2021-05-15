#include<iostream>
using namespace std;
int main()
{
    long long fact=1, numerator, denominator;
    int perm, n, r, i=1, sub;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    while(i<=n)
    {
        fact = i*fact;
        i++;
    }
    numerator = fact;                    // n!
    sub = n-r;
    fact = 1;
    i = 1;
    while(i<=sub)
    {
        fact = i*fact;
        i++;
    }
    denominator = fact;                // (n-r)!
    perm = numerator/denominator;
    cout<<"\nPermutation (nPr) = "<<perm;
    cout<<endl;
    return 0;
}
