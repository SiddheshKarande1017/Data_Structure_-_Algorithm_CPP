class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
            {
                mini=prices[i];
                maxi=prices[i];
            }
            else
            {
                maxi=max(maxi,prices[i]);
            }
            profit=max(profit,abs(maxi-mini));
        }
        return profit;
    }
};