#include <bits/stdc++.h>
using namespace std;
 
void g()
{
    int val[3] = { 5, 10, 15};
    int *ptr;
    ptr = val ;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
 
    return;
}
int main()
{
    g();
    return 0;
}
