class Solution {
public:
    vector<pair<int,int>> g[101];
    int d;
    int ans=INT_MAX;
    int K;
    int dp[101][101];
    long long dfs(int root,int step){
        if(root==d){
            if(step-1>K) return INT_MAX;
            return 0;
        }
        if(step-1>K){
            return INT_MAX;
        } 
        if(dp[root][step]!=-1) return dp[root][step];
        long long ans=INT_MAX;
        for(auto &x:g[root]){
            
            ans=min(ans,x.second+dfs(x.first,step+1));
                
            
        }
        return dp[root][step]=ans;
        
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        for(auto &x:flights){
            g[x[0]].push_back({x[1],x[2]});
        }
        d=dst;
        K=k;
        memset(dp,-1,sizeof(dp));
        long long z=dfs(src,0);
        if(z>=INT_MAX) return -1;
        return z;
    }
};