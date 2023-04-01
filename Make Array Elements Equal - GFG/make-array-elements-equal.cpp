//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        long long int k=N/2;
        long long int ans=0;
        if(N%2)
        {
            long long int mid=(2*k)+1;
            long long int end=mid-1;
            long long int nk=(end+2)/2;
            long long int sum=(nk)*((nk-1));
            ans=sum;
        }
        else
        {
            long long int mid=(2*k)+1;
            long long int mid2=(2*(k-1))+1;
            long long int avg=(mid+mid2)/2;
            long long int end=avg-1;
            long long int nk=(end+1)/2;
            
            long long int sum=((nk))+((nk-1)*nk);
            //cout<<mid<<" "<<mid2<<" "<<avg<<" "<<end<<" "<<nk<<" "<<sum<<endl;
            ans=sum;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
// } Driver Code Ends