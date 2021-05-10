int main(){

    int n,i,arr[100],key,first,last,mid;
    cout<<"Enter limit: ";
  cin>>n;
     cout<<"Enter the array: "
       for(i=0;i<n;i++){
         cin>>arr[i];}
  cout<<"Enter the element to be searched: ";
  cin>>key;
  
  mid = (first+last)/2;
  first=0;
  last=n-1;
  
  while(first<=last){
      if(arr[mid]<key){
      first=mid+1;
      }
    else if(arr[mid]==key){
    cout<<"Found at location "<<key<<mid+1;
      break;
    }
  else
    last=mid-1;
    mid=(first+last)/2;
  }
  if(first>last){
  cout<<"Not found! "<<key<<" is not present in the list.\n"
  }
       return 0;
}
