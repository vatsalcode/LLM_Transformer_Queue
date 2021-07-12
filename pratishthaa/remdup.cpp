int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    int j = 0;
 
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l;
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
      cin>>arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
 
    n = removeDuplicates(arr, n);
 
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
  }
    return 0;
}
