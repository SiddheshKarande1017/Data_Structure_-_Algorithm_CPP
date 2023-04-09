class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(auto it:nums)
        {
            if(nums[abs(it)-1]<0)
            {
              ans.push_back(abs(it));
            }
            else
            {
                nums[abs(it)-1]=- nums[abs(it)-1];
            }
        }
        return ans;
    }
};