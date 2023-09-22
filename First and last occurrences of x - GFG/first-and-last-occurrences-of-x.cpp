//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int lower(int arr[],int n,int x){
        int low=-1;
        int high=n;
        while(high-low>1){
            int mid=(high+low)>>1;
            if(arr[mid]<x){
                low=mid;
            }
            else
            high=mid;
        }
        if(high==n) return -1;
        return high;
    }
    int up(int arr[],int n,int x){
        int low=-1;
        int high=n;
        while(high-low>1){
            int mid=(high+low)>>1;
            if(arr[mid]<=x){
                low=mid;
            }
            else
            high=mid;
        }
        if(low==-1) return -1;
        return low;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        if(binary_search(arr,arr+n,x)){
            int i=lower(arr,n,x);
            int j=up(arr,n,x);
            return {i,j};
        }
        return {-1,-1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends