//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char, int>mp;
        for(auto t:s)mp[t]++;
        for(auto t:mp)
        {
            if(t.first=='l' || t.first=='o') continue;
            mp[t.first]=t.second*2;
        }
        int ans=INT_MAX;
        set<char> st={'b','a','l','o','n'};
        for(auto it:mp)
        {
            if(st.find(it.first)!=st.end())
            ans=min(ans,it.second/2);
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends