//Same No. Pyramid

int main(){
         
         int n,digit;
         cout<<"Enter the no. of levels: "
         cin>>n;
         cout<<"Enter the digit : ";
         cin>>digit;
         
         for(int i=1;i<=n;i++){
                 for(int j=1;j<=i;j++){
                 cout<<digit;
                 }
                 cout<<endl;
         }


}
