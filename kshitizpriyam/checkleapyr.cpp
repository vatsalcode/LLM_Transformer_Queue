int main(){
	
	int n;
	cout<<"Enter Year: ";
	cin>>n;
	
	if(n%400==0){
		cout<<"It's a leap year";
	}
	else if(n%100==0){
		cout<<"Not a leap year";
	}
	else if(n%4==0){
		cout<<"It's a leap year";
	}
	else{
		cout<<"Not a leap year";
	}
	return 0;
	
}
