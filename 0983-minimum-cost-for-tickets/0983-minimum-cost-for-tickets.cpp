class Solution
{
    public:
       	// int t1=INT_MAX,t2=INT_MAX,t3=INT_MAX;
        int costtic(vector<int> days, vector<int> costs, int i, int d, int prev, vector< int > &dp)
        {
            if (i >= days.size()) return 0;
            if (dp[i] != -1) return dp[i];
            int t1 = costs[0] + costtic(days, costs, i + 1, 1, days[i], dp);
            int y = i;
            for (; y < days.size(); y++)
            {
                if (days[y] >= days[i] + 7) break;
            }

            int t2 = costs[1] + costtic(days, costs, y, 7, days[i], dp);
            for (; y < days.size(); y++)
            {
                if (days[y] >= days[i] + 30) break;
            }
            int t3 = costs[2] + costtic(days, costs, y, 30, days[i], dp);
            return dp[i] = min(t1, min(t2, t3));
        }
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        vector<int> dp(days.size() + 1, -1);
        return costtic(days, costs, 0, 0, -1, dp);
    }
};