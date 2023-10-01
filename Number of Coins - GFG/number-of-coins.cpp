//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   //sort(coins,coins+M);
	   vector<int> dp(V+1,0);
	   for(int i=1;i<=M;i++){
	       for(int j=1;j<=V;j++){
	           if(j==coins[i-1]){
	               dp[j]=1;
	           }
	           else if(j-coins[i-1]>=0){
	               if(dp[j-coins[i-1]]!=0&&dp[j]==0){
	                   dp[j]=dp[j-coins[i-1]]+1;
	               }
	               else if(dp[j-coins[i-1]]!=0&&dp[j]!=0){
	                   dp[j]=min(dp[j-coins[i-1]]+1,dp[j]);
	               }
	           }
	           else{
	               dp[j]=dp[j];
	           }
	           }
	   }
	   return dp[V]==0?-1:dp[V];
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends