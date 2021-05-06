//Go to statements
#include <iostream>
using namespace std;

int main()
{
inelligible:
    cout << "You cannot vote" << endl;
elligible:
    cout << "you can vote" << endl;
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        goto inelligible;
        break;

    case 20:
        goto elligible;
        break;

    default:
        break;
    }
}
//But it is advised not to use goto statements 
