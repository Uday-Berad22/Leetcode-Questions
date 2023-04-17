//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

const int Ni=1e5+10;
vector<bool> is_prime(Ni,true);
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        long long hp=0;
     for(int i=2;i<=n;i++){
        if(is_prime[i]==true){
            if(i==n)
            return n;
            for(int j=2*i;j<=n;j+=i){
                is_prime[j]=false;
                if(j==n)hp=i;
            }
        }
    }
        return hp;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends