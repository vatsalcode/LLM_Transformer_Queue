//author - Vatsal Verma


class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int sum1=0;
       int sum2=0;
       for(int i=0;i<n/2;i++){
           sum1+=a[i];
       }
       for(int i=n/2;i<n;i++){
           sum2+=a[i];
       }
       
       return abs(sum1-sum2);
    }
};
