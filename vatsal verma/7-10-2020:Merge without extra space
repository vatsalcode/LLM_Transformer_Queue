class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=0, j=0;
	    int count=n, to_swap=0;
	    while(i<n && j<m && count){
	        if(arr1[i]<arr2[j]){
	            i++;
	        }else{
	            j++;
	            to_swap++;
	        }
	        count--;
	    }
	    for(int i=0; i<to_swap; i++){
	        swap(arr2[i], arr1[n-1-i]);
	    }
	    sort(arr1, arr1+n);
	    sort(arr2, arr2+m);
	}
};
