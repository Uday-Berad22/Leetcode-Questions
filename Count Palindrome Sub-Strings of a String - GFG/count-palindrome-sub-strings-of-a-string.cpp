//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends

bool check(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}
int CountPS(char s[], int n)
{
    int count=0;
    string temp;
    for(int i=0;i<n;i++){
        temp="";
        temp.push_back(s[i]);
        for(int j=i+1;j<n;j++){
            temp.push_back(s[j]);
            if(check(temp)){
                count++;
            }
        }
    }
    return count;
    
}