//* Inverted Pyramid

int main(){

     int n;
     cout<<"Enter the numbers of required levels: "
     cin>>n;
     
     for(i=n;i>=1;--i){
          for(int j=1;j<=i;j++){
          cout<<"*";
          }
    cout<<endl;
     }
}
