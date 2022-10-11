class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       
        vector<int>pre,suf;
        pre.push_back(nums[0]);
        int mini=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            pre.push_back(mini);
            mini=min(mini,nums[i]);
        }
        int maxi=nums[nums.size()-1];
        suf.push_back(maxi);
        for(int i=nums.size()-2;i>=0;i--)
        {
            suf.push_back(maxi);
            maxi=max(maxi,nums[i]);
        }
        reverse(suf.begin(),suf.end());
        for(int i=1;i<nums.size()-1;i++)
        {
            if(pre[i]<nums[i] && nums[i]<suf[i]) return true;
        }
        return false;
        
    }
};