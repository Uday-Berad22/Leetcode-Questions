//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   bool detect_cycle_in_Graph_using_BFS(vector<int> G[],int V)
{
    int n = V;
    vector<bool> visited(n, false);
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            q.push({i,i});
            visited[i] = true;
            while (!q.empty())
            {
                    int node = q.front().first;
                    int parent=q.front().second;
                    q.pop();
                    for (auto nbr : G[node])
                    {                             
                        if (!visited[nbr])
                        {
                            q.push({nbr,node});
                            visited[nbr] = true;
                        }
                        else if (visited[nbr] == true && parent != nbr)
                        {
                            return true;
                        }
                    }
            }
        }
    }
    return false;
}
    bool isCycle(int V, vector<int> G[]) {
        if (detect_cycle_in_Graph_using_BFS(G,V))
        {
             return true;
        }
         return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends