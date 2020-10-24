In 100 days I'll practice Competitive programming and work on my Resource pack project.


Day 1: 6/10/2020: Completed Chef and easy Queries (Codechef october long chanllenge , Division 2).
Day 2: 7/10/2020: Made .mcmeta file
Day 3: 8/10/2020: Did practice questions on codechef

                                                   Question: Chef and SnackDown , Problem Code: SNCKYEAR
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int y;
	    cin>>y;
	    if(y==2010 || y==2015 || y==2016 || y==2017 || y==2019)
	    {
	     cout<<"HOSTED"<<endl;   
	    }
	    else
	    cout<<"NOT HOSTED"<<endl;
	}
	return 0;
}
#Day 4: 9/10/2020: Studied linked list and stack, practiced theoretical questions online to clear the basics
#Day 5: 10/10/2020: Did practice questions on codechef

                                                #Question: Chef and Price Control, Problem Code: PRICECON
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],sum=0,sumk=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]>k)
            {
                a[j]=k;
            }
            sumk=sumk+a[j];
        }
        cout<<sum-sumk<<endl;
    }
	return 0;
}
#Day 6: 11/10/2020: Did practice questions on codechef
  							#Question: How much Scholarship, Problem Code: ZCOSCH
#include <iostream>
using namespace std;

int main() {
	long int r;
	int s=0;
	cin>>r;
	if(r>=1 && r<=50)
	{
	    s =100;
	}
	else if(r>=51 && r<=100)
	{
	    s = 50;
	}
	cout<<s;
	return 0;
	
}


Day 7: 12/10/2020: Did practice questions on codechef
  							Question: Finding Square Roots, Problem Code: FSQRT
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,sq;
	    cin>>n;
	    sq = sqrt(n);
	    cout<<sq<<endl;
	}
	return 0;
}
Day 8: 13/10/2020: Did DS questions on E-lab
Day 9: 14/10/2020: Did redstone changes in data pack
Day 10: 15/10/2020: Did practice questions on codechef
  							Question:Find Remainder, Problem Code:FLOW002
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		// Complete the below line.
		int ans = a%b;
		printf("%d\n", ans);
	}

	return 0;
}
Day 11: 16/10/2020: Did practice questions on codechef
  							Question:That is my Score!, Problem Code:WATSCORE
#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[12]={0};
		while(n>0){
			int i,s;
			cin>>i>>s;
			if(s>a[i]){
				a[i]=s;
			}
			--n;
		}
		int sum=0;
		for(int i=1; i<9; ++i){
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
}
Day 12: 17/10/2020: Did practice questions on codechef
  							Question:First and last digit, Problem Code:FLOW004
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int t,last,sum=0;
	    cin>>t;
	    last = t%10;
	    while(t>9)
	    {
	        t=t/10;
	    }
	    sum = t+last;
	    cout<<sum<<endl;
	}
	return 0;
}
Day 13: 18/10/2020: Tried October cookoff questions
Day 14: 19/10/2020: Did DS questions on E-lab
Day 15: 20/10/2020: Did DS questions on E-lab
Day 16: 21/10/2020: Fixed bugs in resource packs
Day 17: 22/10/2020: Did OOPS questions on E-lab
Day 18: 23/10/2020: Did codecchef practice questions

