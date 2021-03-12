#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main() {
    int n1, n2;
    bool flag;

    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    // swapping n1 and n2 if n1 is greater than n2
    if (n1 > n2) {
      n2 = n1 + n2;
      n1 = n2 - n1;
      n2 = n2 - n1;
    }

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for(int i = n1+1; i < n2; ++i) {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag)
            cout << i << " ";
    }
