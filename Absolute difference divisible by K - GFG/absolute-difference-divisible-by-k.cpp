//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        //code here
        long long ans=0;
        map<int,long long int >mp;
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mp[(arr[i]+k)%k]++;
             maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        for(auto it:mp)
        {
            ans+=(it.second*(it.second-1))/2;
        }
         return ans;
         
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends