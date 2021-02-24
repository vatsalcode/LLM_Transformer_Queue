int main(){
int a[100], n,key;
cout<<"Enter limit: ";
cin>>n;
cout<<"Enter the array :";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"Enter the element to be found : ";
cin>>key;
int i;
for(i=0;i<n;i++){
if(a[i]==key){
cout<<"Element found at "<<i<<" index of array";
break;
}
}
if(i==n){
	cout<<"Element not found";
}
return 0;
}
