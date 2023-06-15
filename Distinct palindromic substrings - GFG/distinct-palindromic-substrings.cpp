//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    void find_palinderomic(int left,int right,string &s,unordered_set<string> &se_t){
        while((left>=0&&right<s.size())&&s[left]==s[right]){
            se_t.insert(s.substr(left,right-left+1));
            left--;
            right++;
        }
    }
    int palindromeSubStrs(string s) {
       unordered_set<string> se_t;
       for(int i=0;i<s.size();i++){
           //odd
           find_palinderomic(i,i,s,se_t);
    
           //even
           find_palinderomic(i,i+1,s,se_t);
       }
       return se_t.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends