//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int M=1e9+7;
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<long long > dp(sum+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=sum;j>=0;j--){
                if(j-arr[i-1]>=0){
                    dp[j]+=(dp[j-arr[i-1]])%M;
                }
            }
        }
        return dp[sum]%M;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends