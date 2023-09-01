//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> distance(n,0);
	   // distance[1]=0;
	    for(int i=0;i<n-1;i++){
	        for(auto edge: edges){
	            int u=edge[0];
	            int v=edge[1];
	            int wt=edge[2];
	            if(distance[u]!=100000000&&distance[u]+wt<distance[v]){
	               distance[v]=distance[u]+wt;
	            }
	        }
	    }
	    for(auto edge: edges){
	            int u=edge[0];
	            int v=edge[1];
	            int wt=edge[2];
	            if(distance[u]!=100000000&&distance[u]+wt<distance[v]){
	               return 1;
	            }
	   }
	   return 0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends