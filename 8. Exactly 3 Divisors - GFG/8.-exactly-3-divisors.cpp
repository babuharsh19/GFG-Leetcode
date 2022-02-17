// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isprime(int n)
    {
        if(n==2||n==3) return true;
        if(n%2==0||n%3==0) return false;
        for(int i=5;i*i<=n;i=i+6)
        {
            if((n%i==0||n%(i+2)==0)&n!=(i+2)){
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        //Your code here
        int count=0;
        for(int i=2;i*i<=N;i++)
        {
            if((isprime(i)==true)){
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends