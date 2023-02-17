//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        int u=0;
        long long pre=0;queue<long long> q;
        for(auto it:GeekNum)
        {
            q.push(it);
            pre+=it;
            u++;
            if(u==N) return it;
            
        }
        long long cur=pre;
        while(u!=N)
        {
            long long t=q.front();
            q.pop();
            q.push(cur);
            pre=cur;
            cur+=pre;
            cur-=t;
            u++;
            
        }
        return pre;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends