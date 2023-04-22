//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        

        unordered_map<long long ,long  long > m;
        vector<long long> ans;
        for(int i=0;i<n;i++)
        ans.push_back(arr[i]);
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(i==0){
                m[ans[i]]=0;
            }
            else{
                if(m.find(ans[i])==m.end()){
                    m[ans[i]]=ans[i-1];
                }
                 ans[i]=ans[i-1]+ans[i];
            }
        }
        for(int i=0;i<n;i++){
            ans[i]=m[arr[i]];
        }
        return ans;
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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends