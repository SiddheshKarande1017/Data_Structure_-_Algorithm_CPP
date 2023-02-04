//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int ans(vector<int>&arr, int prev,vector<int> &dp, int i, int n)
	{
	    if(i>=arr.size()) return 0;
	    if(dp[i]!=-1) return dp[i];
	    int nt=ans(arr,prev,dp,i+1,n);
	    int take=0;
	    if(abs(i-prev)>1)
	    {
	        take=arr[i]+ans(arr,i,dp,i+2,n);
	    }
	    return dp[i]=max(nt,take);
	    
	}
	int findMaxSum(int *arr, int n) {
	    
	    vector<int> a;
	    for(int i=0;i<n;i++)
	    {
	        a.push_back(arr[i]);
	    }
	    vector<int> dp(1000000,-1);
	    int y=ans(a,-2,dp,0,n);
	    return y;
	}
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends