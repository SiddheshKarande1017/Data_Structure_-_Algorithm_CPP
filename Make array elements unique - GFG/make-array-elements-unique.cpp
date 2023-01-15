//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
       // sort(arr.begin(),arr.end());
        map<long long int, long long int>mp;
        for(auto it:arr) mp[it]++;
        int prev=mp.begin()->first-1;
        long long ans=0;
        for(auto it:mp)
        {
            long long int u;
           u=it.second-1;
            if(prev<it.first){ prev=it.first+u; ans+=((u*(u+1))/2);}
            else{
                int s=prev-it.first+1;
                if(s==1)
                {
                    ans+=((u+1)*(u+2))/2;
                    prev=it.first+s+it.second-1;
                }
                else{
            
            int temp=((s+u)*(s+it.second))/2;
            int t2=((s-1)*(s)/2);ans+=(temp-t2);
            prev=it.first+s+it.second-1;
                    
                }
            
            }
             //cout<<it.first<<" "<<u<<" "<<prev<<endl;
            
        }
        return ans;
        
            }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends