//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int gcd_bhai(int a,int b){
        if(b==0) return a;
        return gcd_bhai(b,a%b);
    }
    int countFractions(int n, int numerator[], int denominator[])
    {
        vector<pair<int,int> > v;
        map<pair<int,int> ,int> m;
        for(int i=0;i<n;i++){
            int temp=gcd_bhai(numerator[i], denominator[i]);
            int n1=numerator[i]/temp;
            int n2=denominator[i]/temp;
            v.push_back({n1,n2});
        }
        int count=0;
        for(int i=0;i<n;i++){
             int n1=v[i].second-v[i].first;
             if(m[{n1,v[i].second}]>0){
                 count+=m[{n1,v[i].second}];
             }
             m[{v[i].first,v[i].second}]++;

        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends