//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool BFS(vector<int > G[],vector<bool> &visited,vector<int> &color_set){
        queue<int> q;
        int n=visited.size();  
        for(int i=0;i<n;i++){
           if(!visited[i]){
                 q.push(i);
                 color_set[i]=0;
                 while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto nbr: G[node]){                                     
                        if(color_set[nbr]==color_set[node]&&color_set[nbr]!=-1){
                            return false;
                        }
                        if(!visited[nbr]){
                            q.push(nbr);
                            visited[nbr]=true;
                            color_set[nbr]=color_set[node]^1;
                        }
                    }
                }
           }
        }
        return true;   
}

	bool isBipartite(int V, vector<int>G[]){
	    // Code here
	    int n=V;
     vector<bool> visited(n,false);
    vector<int> color_set(n,-1);
    int source=0;
    int flag=0;
    return BFS(G,visited,color_set); 
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends