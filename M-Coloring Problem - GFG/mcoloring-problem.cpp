//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool dfs(int i,bool graph[101][101],int m,int n,vector<int> &colors){
        if(colors[i]!=0) return true;
        for(int k=1;k<=m;k++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(graph[i][j]==true){
                    if(colors[j]==k){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0){
                int flag1=0;
                colors[i]=k;
                for(int j=0;j<n;j++){
                    if(graph[i][j]==true&&colors[j]==0){
                        if(dfs(j,graph,m,n,colors)==false){
                            flag1=1;
                            break;
                        }
                    }
                }
               if(flag1==0){
                   return true;
               }
            }
        }
        colors[i]=0;
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> colors(n,0);
        for(int i=0;i<n;i++){
            if(dfs(i,graph,m,n,colors)==false) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends