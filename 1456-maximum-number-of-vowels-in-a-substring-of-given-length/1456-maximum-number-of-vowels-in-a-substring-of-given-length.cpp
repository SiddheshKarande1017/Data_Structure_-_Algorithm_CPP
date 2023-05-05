class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int maxi=INT_MIN;
        set<char> st={'a','e','i','o','u'};
        for(int i=0;i<k;i++)
        {
            if(st.find(s[i])!=st.end())
            {
                ans++;
            }
        }
        maxi=ans;
        int p=0;
        for(int i=k;i<s.size();i++)
        {
            if(st.find(s[p])!=st.end()) ans--;
            if(st.find(s[i])!=st.end()) ans++;
            p++;
            maxi=max(maxi,ans);
        }
        return maxi;
    }
};