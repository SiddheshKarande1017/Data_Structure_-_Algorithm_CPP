class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<int,pair<string,int>> mp;
        string t="";
        for(int i=0;i<strs[0].size();i++){t+=strs[0][i];mp[i+1]={t,0};}
        for(auto it:strs)
        {
            string sp="";
            for(auto ik:it)
            {
                sp+=ik;
                if(mp[sp.size()].first!=sp) break;
                mp[sp.size()].second++;
            }
        }
        string ans="";
        for(auto it:mp)
        {
            //cout<<it.second.first<<" ";
            if(it.second.second>=strs.size()) ans=it.second.first;
            else break;
        }
        return ans;
    }
};