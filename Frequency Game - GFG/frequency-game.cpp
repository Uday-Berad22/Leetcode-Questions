//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        int f=INT_MAX,ma_x;
        for(auto a: m){
            if(f>a.second){
                ma_x=a.first;
                f=a.second;
            }
            else if(f==a.second){
                ma_x=max(ma_x,a.first);
                f=a.second;
            }
        }
        return ma_x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends