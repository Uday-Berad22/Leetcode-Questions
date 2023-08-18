//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        long long prefix=0;
        int count=0;
        
        unordered_map<long long,int> m;
        m[0]++;
        for(int i=0;i<N;i++){
            prefix=prefix+Arr[i];
            if(m[prefix-k]>0){
                count+=m[prefix-k];
            }
            m[prefix]++;
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
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends