#include <iostream>
#include <string>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    long long int count[n] = {0};
    count[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
      if (arr[i + 1] * arr[i] < 0)
      {
        count[i] = 1 + count[i + 1];
      }
      else
      {
        count[i] = 1;
      }
    }
    for (int i = 0; i < n; i++)
    {
      cout << count[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
