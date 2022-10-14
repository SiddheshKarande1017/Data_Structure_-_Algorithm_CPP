class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp,mp1;
        if(s.size()!=t.size()) return false;
        bool k=true;
        for(int i=0;i<s.size();i++)
        {
            auto ik=mp.find(s[i]);
            if(ik!=mp.end())
            {
                if(t[i]!=ik->second)
                {
                    k=false;break;
                }
            }
            else
                mp[s[i]]=t[i];
        }
        if(!k) return k;
        else
        {
             for(int i=0;i<t.size();i++)
            {
            auto ik=mp1.find(t[i]);
            if(ik!=mp1.end())
            {
                if(s[i]!=ik->second)
                {
                    k=false;break;
                }
            }
            else
                mp1[t[i]]=s[i];
             }
            return k;
            
        }
        
    }
};