//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int ans=0;
        for(int i=0;i<S.size();i++)
        {
            int a1=0;
            int a2=0;
            for(int j=i;j<S.size();j++)
            {
                if(S[j]>='A' && S[j]<='Z')
                {
                    a1++;
                }
                else
                {
                    a2++;
                    
                }
                if(a1==a2)
                {
                    ans++;
                    
                }
                
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends