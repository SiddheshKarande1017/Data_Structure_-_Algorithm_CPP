class Solution {
public:
    string reverseVowels(string s) {
        string t="";
        set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        for(auto it:s)
        {
            if(st.find(it)!=st.end())
            t.push_back(it);
        }
        int j=t.size()-1;
        for(int  i=0;i<s.size();i++)
        {
            if(st.find(s[i])!=st.end())
            {
                s[i]=t[j];
                j--;
            }
        }
         return s;
    }
};