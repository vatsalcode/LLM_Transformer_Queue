//Linear Sort

int main(){

      int a[100],n,temp;
      cout<<"Enter a limit: ";
      cin>>n;
      cout<<"Enter the array: ";
      for(int i=0;i<n;i++){
      cin>>a[i];
      }
  
      for(int i=1;i<n-1;i++){
        
        int j=i;
        while(j>0 && j[i-1]>j[i]{
        
             a[j]=temp;
             a[j]=a[j-1];
             a[j-1] = temp;
             j--;
        }
      }
  
     cout<<"Array after being sorted: ";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
              
    return 0;
}
