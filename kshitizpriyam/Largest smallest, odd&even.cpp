int largestof3(int a, int b, int c){

            if(a>b){
            if(b>c)
            return a;
            else
            return c;
            }
            else{
            if(b>a){
            if(a>c)
            return b;
            else
            return c;
            }
            }
}

int smallestof3(int a, int b, int c){

            if(a<b){
            if(b<c)
            return a;
            else
            return c;
            }
            else{
            if(b<a){
            if(a<c)
            return b;
            else
            return c;
            }
            }
}

int main(){

      int a,b,c;
      cout<<"Enter the 3 numbers: ";
      cin>>a>>b>>c;
      cout<<"The Largest No. among 3 is ";
      int result1 = largestof3(a,b,c);
      if(result1%2==0){
      cout<<result1<<" is even";
      }
      else{
      cout<<result1<<" is odd";
      }
      cout<<"The smallest No. among 3 is ";
      int result2 = smallestof3(a,b,c);
       if(result2%2==0){
      cout<<result2<<" is even";
      }
      else{
      cout<<result2<<" is odd";
      }
      
}
