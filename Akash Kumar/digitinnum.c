#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/



 int tNum,cnt;

	cnt=0;
	tNum=N;

	while(tNum>0){
		cnt++;
		tNum/=10;
	}

	printf("The number %d contains %d digits.",N,cnt);
	
	return 0;
}
