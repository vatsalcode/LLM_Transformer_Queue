#include <iostream>
using namespace std;

int main()
{
	int Var = 10;
  int *ptr = &Var;
  cout << "Value of Var = "<< *ptr << endl;
  cout << "Address of Var = " << ptr << endl;
  *ptr = 20; 
  cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;
  return 0;
}
