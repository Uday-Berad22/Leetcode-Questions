//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string s[], int n)
    {
        
        string ans=s[0];
        string  temp=s[0];
        for(int i=1;i<n;i++){
            // if(i==j) continue;
            int k=0;
            string a="";
            while(k<s[i].size()&&s[i][k]==temp[k]){
                a.push_back(temp[k]);
                k++;
            }
            if(a.size()<ans.size()){
                ans=a;
            }
        }
        if(ans.size()==0) return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends