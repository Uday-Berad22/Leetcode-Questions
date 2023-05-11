//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int c=0;

        for(int i=0;i<n;i++){
            if(arr[i]==0) c++;
        }
        if(c==0) return 1;
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                flag=1;
            }
            else if(flag==1){
                 count++;
                 flag=0;
            }
        }
        if(flag==1){
                 count++;
                 flag=0;
        }
        return count;
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
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends