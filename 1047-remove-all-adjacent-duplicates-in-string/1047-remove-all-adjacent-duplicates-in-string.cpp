class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);continue;
                
            }
            bool k=false;
            while(!st.empty() && st.top()==s[i])
            {
                k=true;
                st.pop();
            }
            if(!k)st.push(s[i]);
        }
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};