//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    const int M=1e9+7;
    vector<int> dp;
  public:
    int giveMefib(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(giveMefib(n-1)+giveMefib(n-2))%M;
    }
    int nthFibonacci(int n){
        // code here
        dp.resize(n+1,-1);
        return dp[n]=giveMefib(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends