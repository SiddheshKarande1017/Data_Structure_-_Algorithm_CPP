class Solution {
public:
    double average(vector<int>& salary) {
        double p=0;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:salary)
        {
            mini=min(mini,it);
            maxi=max(maxi,it);
            p+=it;
        }
        double ans=(p-mini-maxi)/(double)(salary.size()-2);
        return ans;
        
    }
};