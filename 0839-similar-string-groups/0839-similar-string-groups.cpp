class Solution {
public:
    bool ed(string a, string b)
    {
        int y=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i]) y++;
        }
        return y<=2;
    }
    void dfs(vector<bool> &vis, int p,map<int,vector<int>>mp)
    {
        vis[p]=true;
        for(auto it:mp[p])
        {
            if(!vis[it])
            {
                dfs(vis,it,mp);
            }
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        int ans1=0;
        map<int,vector<int>>mp;
        for(int i=0;i<strs.size();i++)
        {
            for(int j=i+1;j<strs.size();j++)
            {
                if(ed(strs[i],strs[j]))
                {
                    mp[i].push_back(j);
                     mp[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<bool> vis(strs.size()+2,false);
        for(int i=0;i<strs.size();i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(vis,i,mp);
            }
        }
        return ans;
    }
};