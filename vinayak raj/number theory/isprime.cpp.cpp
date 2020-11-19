#include <iostream>

using namespace std;

int make_sieve(int n){
    bool is_prime[n+1];
    for(int i=0;i<n+1;i++){
        is_prime[i]=true;
    }
    is_prime[0]=false;
    is_prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
    int counter=0;
    for(int i=0;i<n+1;i++){
        if(is_prime[i]==true){
            cout<<"The Prime Number Between 1 and "<<n<<" are: "<<i<<endl;
            counter++;
        }
    }
    return counter;
}



int main(){
    int n;
    cin>>n;
    int no_of_primes=make_sieve(n);
    cout<<endl<<endl<<"Total Number Of prime Number between 1 and "<<n <<" are: "<<no_of_primes<<endl;
    return 0;
}
