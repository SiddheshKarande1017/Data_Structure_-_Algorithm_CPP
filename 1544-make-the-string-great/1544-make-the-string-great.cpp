class Solution {
public:
    string makeGood(string s) {
          string ans="";
        int n=s.size();
         stack<char>st;
        for(int i=0;i<n;i++)
        { 
            if(!st.empty() && (st.top()==(s[i]+32)  || st.top()==(s[i]-32)))
            {
               st.pop();
            }
            else
             {
                 st.push(s[i]);
             }
        }
        while(!st.empty())
        {
             char x=st.top();
            ans.push_back(x);
            st.pop();
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};