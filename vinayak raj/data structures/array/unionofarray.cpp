#include<bits/stdc++.h>

using namespace std;

int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
        cout << i++[arr1] << " ";

    while (j < n)
        cout << j++[arr2] << " ";
}
int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int m,n;cin>>m>>n;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++)
        cin>>i[arr1];
    for(int i=0;i<m;i++)
        cin>>i[arr2];
    printUnion(arr1, arr2, m, n);
    cout<<endl;
    printIntersection(arr1,arr2,m,n);
    return 0;
}
