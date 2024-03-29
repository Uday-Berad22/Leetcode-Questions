//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int tt) {
        // Your code goes here
        set<vector<int> > ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            // cout<<arr[i]<<" ";
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=n-1;
                int t=tt-(arr[i]+arr[j]);
                while(k<l){
                    if(arr[k]+arr[l]==t){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        ans.insert(temp);
                        if(arr[k+1]+arr[l]<=t){
                            k++;
                        }
                        else{
                            l--;
                        }
                    }
                    else if(arr[k]+arr[l]<t){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        // cout<<"-------------------- "<<endl;
        vector<vector<int>> fans;
        for(auto a: ans){
            fans.push_back(a);
        }
        return fans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends