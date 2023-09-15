//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum=accumulate(arr,arr+N,0);
        vector<bool> dp(sum/2+1);
        dp[0]=1;
        for(int i=1;i<=N;i++){
            for(int j=sum/2;j>=0;j--){
                if(j==arr[i-1]||(j-arr[i-1]>=0&&dp[j-arr[i-1]]==true)){
                    dp[j]=true;
                    if(sum-j==j){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends