//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        int ans=-1;
        for(int i=0;i<A.size();i++)
        {
            int u=i;
            
            if(A[i]==B[0])
            {
                int t;
                // if(i==0)t=0;
                // else 
                t=1;
                bool k=false;
            for(int j=0;j<B.size();j++)
            {
                if(B[j]!=A[u])
                {
                    k=true; break;
                }
                if(j!=0 && u==0) t++;
                u=(u+1)%A.size();
            }
            if(!k)
            {
                ans=t;
                break;
            }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends