//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>a, int sum){
        int n=a.size();
        vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
        for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0){
                dp[i][j]=1;
                continue;
            }
            if(i==0){
                continue;
            }
            else if(a[i-1]>j){
                dp[i][j]=dp[i-1][j];
               
            }
            else if(dp[i-1][j]==true){
                dp[i][j]=true;
            }
            else if( dp[i-1][j-a[i-1]]==true){
                dp[i][j]=true;
            }
        }
    }
    return dp[n][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends