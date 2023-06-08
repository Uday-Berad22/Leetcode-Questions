//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void giveMePermutation(string &s,int level,int &flag,int &k,int &count){
        if(flag==1) return ;
        if(level==s.size()){
            count++;
            if(count==k){
               flag=1;
            }
            return ;
        }
        for(int i=level;i<s.size();i++){
            swap(s[level],s[i]);
            giveMePermutation(s,level+1,flag,k,count);
            if(flag==1) return ;
        }
        if(flag==1) return ;
        for(int i=level;i<s.size()-1;i++){
            swap(s[i],s[i+1]);
        }
    }
    string kthPermutation(int n, int k)
    {
        string s;
        for(int i=1;i<=n;i++){
            s.push_back(char(i+'0'));
        }
        int count=0;
        int flag=0;
        giveMePermutation(s,0,flag,k,count);
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends