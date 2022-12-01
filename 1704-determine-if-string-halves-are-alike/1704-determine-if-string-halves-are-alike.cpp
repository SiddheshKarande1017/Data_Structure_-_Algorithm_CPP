class Solution {
public:
    bool halvesAreAlike(string s) {
        int left=0,right=0;
        set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<(s.size())/2;i++)
        {
            if(st.find(s[i])!=st.end()) left++;
        }
        for(int i=(s.size())/2;i<(s.size());i++)
        {
            if(st.find(s[i])!=st.end()) right++;
        }
        return left==right;
    }
};