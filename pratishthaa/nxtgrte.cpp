#include<iostream>
using namespace std;

void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++)
	{
		next = -1;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				next = arr[j];
				break;
			}
		}
		cout << arr[i] << " -- "
			<< next << endl;
	}
}

int main()
{
  int arr[] = {12, 14, 25, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}
