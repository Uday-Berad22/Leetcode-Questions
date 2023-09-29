//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    vector<vector<int>> dirs={{1,0},{0,1},{-1,0},{0,-1}};
  public:
    void dfs(int i,int j,vector<vector<int>> &grid){
        if(i<0||i>=grid.size()||j>=grid[0].size()||j<0) return;
        if(grid[i][j]==1){
            grid[i][j]=0;
            for(auto &dir: dirs){
                 dfs(i+dir[0],j+dir[1],grid);
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
                if(i==0||i==n-1){
                     for(int j=0;j<m;j++){
                        dfs(i,j,grid);
                     }
                }
                dfs(i,0,grid);
                dfs(i,m-1,grid);
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends