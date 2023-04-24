//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int n){
        int x=log2(n)+1;
         unordered_map<int,int> m;
         if(n==1)
         return 1;
         if(n==2)
         return 2;
         if(n==3)
         return 4;
         m[1]=1;
         m[3]=4;
         for(int i=3;i<x;i++){
             int y=1<<i;
             int size=1<<(i-1);
             int k=1<<(i-1);
            m[y-1]=((size*(i-1))/2)+size+m[k-1];
         }
         int fans=0;
         int  z=1<<(((int)log2(n)));
         int stop=(int)log2(n);
         int diff=n-z+1;
         int bro=0;
         for(int i=0;i<stop;i++){
             int ans=diff/pow(2,i);
             ans=ans/2;
             ans=ans*pow(2,i);
             
             int flag=0;
             if(1&(n>>i)){
                 int b=pow(2,i);
                 flag=diff%b;
             }
             ans=ans+flag;
             fans+=ans;
             bro=1;;
         } 
         if(bro==1)
         fans+=diff;
        return fans+m[z-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.countBits(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends