class Solution {
public:
    long long int count;
    void dfs(int n,map<int,vector<int>>&mp, vector<bool> &vis, int node)
    {
        vis[node]=true;
        count++;
        for(auto it:mp[node])
        {
            if(!vis[it])
            {
                dfs(n,mp,vis,it);
            }
        }
        
    }
    long long countPairs(int n, vector<vector<int>>& edges)     {
       // vector<long long> ans;
        map<int, vector<int>>mp;
        for(auto it:edges)
        {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
            
        }
        vector<bool>vis(n,false);
        vector<long long> a;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count=0;
                dfs(n,mp,vis,i);
                a.push_back(count);
            }
        }
        vector<long long> a2;
        long long sum=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            a2.push_back(sum);
            sum+=a[i];
        }
         reverse(a2.begin(),a2.end());
        long long ans=0;
        for(int i=0;i<a.size();i++)
        {
            ans+=(a[i]*a2[i]);
        }
        return ans;
    }
    
};