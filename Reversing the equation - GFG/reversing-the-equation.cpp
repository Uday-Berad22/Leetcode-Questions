//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string num,ans;
            stack<char> stk;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'){
                    while(!stk.empty()){
                        ans.push_back(stk.top());
                        stk.pop();
                    }
                    ans.push_back(s[i]);
                }
                else{
                    stk.push(s[i]);
                }
            }
             while(!stk.empty()){
                        ans.push_back(stk.top());
                        stk.pop();
                    }
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends