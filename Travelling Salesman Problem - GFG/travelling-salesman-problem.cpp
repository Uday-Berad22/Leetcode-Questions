//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define setofCities setOfCities
class Solution {
public:
int fun(int n,int last,int i,vector<vector<int>> &cost,vector<vector<int>> &dp){
    if(last==(1<<n)-1) return cost[i][0];
    if(dp[last][i]!=-1) return dp[last][i];
    int a=INT_MAX;
    for(int j=0;j<n;j++){
        if((last&(1<<j))==0){
            int temp=last;
            temp=(last|(1<<j));
            a=min(a,fun(n,temp,j,cost,dp)+cost[i][j]);
        }
    }
    return dp[last][i]=a;
}

int total_cost(vector<vector<int>>cost){
    // Code here
    int ans=INT_MAX;
    int n=cost.size();
    int num=(1<<(n+1))-1;
    vector<vector<int>> dp(num+1,vector<int> (n,-1));
    return fun(n,1,0,cost,dp);
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends