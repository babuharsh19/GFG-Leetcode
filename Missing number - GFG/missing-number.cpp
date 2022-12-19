//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    for(int i=0;i<N-1;i++){
        if(A[i]!=i+1&&A[i]<N){
        swap(A[i],A[A[i]-1]);
        i--;
        }
    }
    for(int i=0;i<N-1;i++){
        if(A[i]!=i+1){
        return i+1;
        }
    }
    return N;
}