using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d;
		int sum=0;
		e=a/b;
		if(e%2==0)
		{
			sum+= b * ((e/2)*(2*c+ (e-1)*d));
		}
		else
		{
		    sum+= b * (e*(c+((e-1)/2)*d));
		}
		sum+=(a%b)*(c+(e)*d);
		cout<<sum<<endl;
	}
	return 0;
}
