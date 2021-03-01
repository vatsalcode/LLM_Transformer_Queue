int main(){

          int n;
          cin>>n;
          
          if(n>=97 && n<=122){
          cout<<"It's a small character.";
          }
          else if(n>=65 && n<=90){
          cout<<"It's a large character";
          }
          else if(n>=48 && n<=57){
          cout<<"It's a no. digit";
          }
          else
          cout<<"It's a special character";
          

}
