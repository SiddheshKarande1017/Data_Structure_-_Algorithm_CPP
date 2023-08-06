//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    multiset<string> st;
    void dfs(string s, int i)
    {
        if(i>=s.size()) 
        {
            st.insert(s);
            return;
        }
        
        for(int j=i;j<s.size();j++)
        {
            swap(s[i],s[j]);
            dfs(s,i+1);
            swap(s[i],s[j]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        dfs(S,0);
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
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends