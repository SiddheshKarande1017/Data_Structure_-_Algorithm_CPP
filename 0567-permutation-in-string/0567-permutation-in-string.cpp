class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int p=s1.size();
        if(p>s2.size()) return false;
        map<char,int> st1,st2;
        for(int i=0;i<p;i++)
        {
            st1[s1[i]]++;
            st2[s2[i]]++;
        }
        if(st1==st2) return true;
        int y=0;
        for(int i=p;i<s2.size();i++)
        {
            st2[s2[y]]--;
            if(st2[s2[y]]==0) st2.erase(s2[y]);
            st2[s2[i]]++;
            if(st1==st2) return true;
            y++;
        }
        return false;
    }
};