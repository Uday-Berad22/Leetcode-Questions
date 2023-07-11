//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int K)
    {
        int N=n*1LL*m;
        int count=0;
        int c=m,r=n-1;
        int k=0;
        int j=0;
        while(count<n*m){
            for(int i=0;i<c&&count<m*n;i++){
                K--;
                if(K==0){
                    return a[j][k];
                }
                k++;
                count++;
            }
            c-=1;
            k=k-1;
            j++;
            for(int i=0;i<r&&count<m*n;i++){
                K--;
                  if(K==0){
                    return a[j][k];
                }
                j++;
               
                count++;
            }
            r-=1;
            j=j-1;
            k--;
            for(int i=0;i<c&&count<m*n;i++){
                K--;
                if(K==0){
                    return a[j][k];
                }
                k--;
                 
                count++;
            }
            k=k+1;
            c-=1;
            j--;
            for(int i=0;i<r&&count<m*n;i++){
               K--;
                if(K==0){
                    return a[j][k];
                }
               j--;
               
               count++;
            }
            k++;
            j=j+1;
            r=r-1;
        }
        return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends