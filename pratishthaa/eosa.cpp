#include<bits/stdc++.h>
using namespace std;
void count(int cnt,int ncnt)
{
	int num;
	if(cnt>ncnt)
	{
		num=cnt;
	}
	else
	{
		num=ncnt;
	}
	while(num!=0){
	
	switch(num % 10)
        {
            case 0: 
                printf("zero");
                break;
            case 1: 
                printf("one");
                break;
            case 2: 
                printf("two");
                break;
            case 3: 
                printf("three");
                break;
            case 4: 
                printf("four");
                break;
            case 5: 
                printf("five");
                break;
            case 6: 
                printf("six");
                break;
            case 7: 
                printf("seven");
                break;
            case 8: 
                printf("eight");
                break;
            case 9: 
                printf("nine");
                break;
        }
        
        num = num / 10;
    }
    printf("\n");
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int cnt=0;
		int ncnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				cnt++;
			}
			else
			{
				ncnt++;
			}
		}
		count(cnt,ncnt);
	}
}
