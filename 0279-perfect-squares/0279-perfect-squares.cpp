class Solution {
public:
    int numSquares(int n) {
        vector<long long int> dp(n+1,INT_MAX);
        vector<int> sq;
        for(int i=1;i*i<=n;i++){
            sq.push_back(i);
        }
        //17: 1 2 3 4
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<sq.size();j++){
                if(sq[j]*sq[j]<=i){
                    dp[i] = min(dp[i-(sq[j]*sq[j])]+1,dp[i]);
                }
            }
        }
        return dp[n];
    }
};