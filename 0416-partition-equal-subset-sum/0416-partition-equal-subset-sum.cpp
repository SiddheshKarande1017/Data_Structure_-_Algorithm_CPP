class Solution
{
    public:
        bool newsub(int n, int k, vector<int> &arr, int i, vector<vector< int>> &dp)
        {

            if (i >= n)
            {
                if (k == 0) return true;
                return false;
            }
            if (dp[i][k] != -1) return dp[i][k];
            bool nott = newsub(n, k, arr, i + 1, dp);
            bool t = false;
            if (arr[i] <= k)
            {
                t = newsub(n, k - arr[i], arr, i + 1, dp);
            }
            return dp[i][k] = nott || t;
        }
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (auto it: nums) sum += it;
        if(sum%2) return false;
        
        vector<vector < int>> dp(nums.size() + 5, vector<int> (30000, -1));
        sum=sum/2;
        return newsub(nums.size(), sum, nums, 0, dp);
    }
};