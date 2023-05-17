class Solution {
public:
    // bool dfs(vector<bool> &vis, int n, map<int,vector<int>>&mp, int &y)
    // {
    //     vis[n]=true;
    //     for(auto it:mp[n])
    //     {
    //         if(!vis[it])
    //         {
    //             dfs(vis,it,mp,y=y+1);
    //         }
    //     }
    // }
    void dfs(vector<bool> &vis, int n, map<int,vector<int>>&mp, int &y, int &node, int &node2)
    {
        vis[n]=true;
        for(auto it:mp[n])
        {
            if(!vis[it])
            {
                dfs(vis,it,mp,y=y+1,node=min(node,(int)mp[it].size()),node2=max(node2,(int)mp[it].size()));
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        map<int,vector<int>>mp;
        for(auto it:edges)
        {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        vector<bool> vis(n, false);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int y=0;
                int node=mp[i].size();
                int node2=mp[i].size();
                dfs(vis,i,mp,y,node,node2);
                if(mp[i].size()==y && node==node2 && node==y) ans++;
            }
            
        }
        return ans;
        
    }
};