class Solution {
public:
    int mod=1e9+7;
    int ans(int target,vector<vector<int>>& types, int i,vector<vector<int>>&dp)
    {
        if(i>=types.size())
        {
            if(target==0)
        {
            return 1;
        }
            return 0;
        }
        if(target==0)
        {
            return 1;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int ans1=0;
        ans1+=ans(target,types,i+1,dp)%mod;
        for(int j=1;j<=types[i][0];j++)
        {
            if(target-(j*types[i][1])>=0)
            {
                ans1+=ans(target-(j*types[i][1]),types,i+1,dp)%mod;
                ans1=ans1%mod;
            }
        }
        return dp[i][target]=ans1;
    }
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        vector<vector<int>> dp(55,vector<int>(1009,-1));
        
        return ans(target,types,0,dp);
    }
};