//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        unordered_map<long long ,int> m;
        int n=N;
        long long prefix=0;
        m[0]=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            prefix+=A[i-1];
            if(m.find(prefix-k)!=m.end()){
                ans=max(ans,i-m[prefix-k]);
            }
            if(m.find(prefix)==m.end())
            m[prefix]=i;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends