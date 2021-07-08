#include <iostream>
#include<iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    cin>>i>>l>>c>>f>>d;
    cout<<i<<endl<<l<<endl<<c<<endl<<fixed<<setprecision(3)<<f<<endl<<fixed<<setprecision(9)<<d;
    return 0;
}

