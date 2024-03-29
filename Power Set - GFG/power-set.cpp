//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
            int siz=1<<s.size();
            vector<string> ans;
            for(int i=1;i<siz;i++){
                string temp;
                for(int j=0;j<=31;j++){
                    if((i>>j)&1){
                        temp.push_back(s[j]);
                    }
                }
                ans.push_back(temp);
            }
            sort(ans.begin(),ans.end());
            return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends