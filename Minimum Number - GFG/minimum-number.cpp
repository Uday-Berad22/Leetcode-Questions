//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        int m=INT_MAX;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cnt++;
            }
            else{
                m=min(m,arr[i]);
            }
        }
        if(cnt>0) return 1;
        return m;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends