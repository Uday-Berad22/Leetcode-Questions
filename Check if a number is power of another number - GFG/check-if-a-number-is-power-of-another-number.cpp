//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long X, long long n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(X==1&&n!=1) return 0;
        if(X==1&&n==1) return 1;
        long long pow=1;
        while(pow<n){
            pow*=X;
        }
        if(pow==n) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends