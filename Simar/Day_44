class Solution {
public:

    double fms(int A[], int m, int B[], int n, int k){
        
        if (m>n) {return fms(B,n,A,m,k);}
        
        if (m==0) { return B[k-1];}
        if (k==1) { return min(A[0],B[0]);}
        int pa = min(k/2,m);
        int pb = k-pa;
        if (A[pa-1]<=B[pb-1]) {return fms(A+pa,m-pa,B,n,k-pa);}
        return fms(A,m,B+pb,n-pb,k-pb);
    }

    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int total = m + n;
        if(total%2==1){
            return fms(A,m,B,n,total/2+1);
        }else{
            return (fms(A,m,B,n,total/2)+fms(A,m,B,n,total/2+1))/2;
        }
        
    }
};
