//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int j=0;
        bool k=false;
        for(int i=0;i<T.size();i++ )
        {
            //cout<<i<<endl;
            if(j>=S.size()){ return 0;}
            if(T[i]>='0' && T[i]<='9' && !k)
            {
                //cout<<"ok";
                int count=0;
                while(T[i]>='0' && T[i]<='9' && i<T.size())
                {
                    count=count*10+(T[i]-'0');
                    i++;
                }
                i--;
                j+=count;
            }
            else
            {
                if(T[i]!=S[j]) return 0;
                else j++;
                k=false;
            }
            //cout<<i<<" "<<j<<endl;
        }
        if(j==S.size()) return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends