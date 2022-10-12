class Solution {
public:
    int costlad(vector<int> cost,int i,vector<int>&dp)
    {
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int stp1=cost[i]+costlad(cost,i+1,dp);
        int stp2=cost[i]+costlad(cost,i+2,dp);
        return dp[i]=min(stp1,stp2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        int a= costlad(cost,0,dp);
        int b= costlad(cost,1,dp);
        return min(a,b);
    }
};