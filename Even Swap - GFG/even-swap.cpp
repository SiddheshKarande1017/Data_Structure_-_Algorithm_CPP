//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            multiset<int, greater<int>> st;
            bool flag=true;
            if(a[0]%2==0) flag=true;
            else flag=false;
            vector<int> ans;
            int j=0;
            for(int i=0;i<n;i++)
            {
                if(flag && a[i]%2==1)
                {
                    for(auto it:st)
                    {
                        ans.push_back(it);
                    }
                    st.clear();
                    flag=false;
                    st.insert(a[i]);
                }
                else if(!flag && a[i]%2==0)
                {
                    for(auto it:st)
                    {
                        ans.push_back(it);
                    }
                    st.clear();
                    flag=true;
                    st.insert(a[i]);
                }
                else 
                {
                    st.insert(a[i]);
                    
                }
            }
            for(auto it:st)
            {
                ans.push_back(it);
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
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends