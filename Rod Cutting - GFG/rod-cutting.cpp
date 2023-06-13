//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int help_function(int index,int n,int price[],vector<vector<int>> &dp){
        if(index>n){
            return 0;
        } 
        int a=0;
        if(index!=n&&dp[index+1][n]==-1){
            dp[index+1][n]=help_function(index+1,n,price,dp);
        }
        if(index!=n){
            a=dp[index+1][n];
        }
         if(dp[index][n-index]==-1){
           dp[index][n-index]=max(help_function(index,n-index,price,dp),0);
        }
        int b=dp[index][n-index]+price[index-1];
        dp[index][n]=max(a,b);
        return max(max(a,b),0);
    }
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
       int ans=help_function(1,n,price,dp);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends