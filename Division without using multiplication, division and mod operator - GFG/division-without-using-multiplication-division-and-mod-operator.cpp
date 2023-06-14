//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
       
        int sign=1;
        if(divisor<0&&dividend>0||divisor>0&&dividend<0){
            sign=-1;
        }
          dividend=abs(dividend);
          divisor=abs(divisor);
    //   while(dividend>=divisor){
    //       ans++;
    //       dividend-=divisor;
    //   }
    //   return ans*sign;
    
     long long ans= (exp(log(dividend)-log(divisor)))+0.00001;
     return sign*ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends