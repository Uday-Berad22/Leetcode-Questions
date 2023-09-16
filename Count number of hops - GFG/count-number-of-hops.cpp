//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    int M=1e9+7;
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long fun(int n, vector<long long > &dp){
        if(n==1) return 1; if(n==2) return 2; if(n==3) return 4;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(fun(n-1,dp)+fun(n-2,dp)+fun(n-3,dp))%M;
    }
    long long countWays(int n)
    {
        // if(n==1) return 1; if(n==2) return 2; if(n==3) return 4;
        vector<long long > dp(n+1,-1);
        // dp[1]=1;
        // dp[2]=2;
        // dp[3]=4;
        // for(int i=4;i<=n;i++){
        //     dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%M;
        // }
        return fun(n,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends