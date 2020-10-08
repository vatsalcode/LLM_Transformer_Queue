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
