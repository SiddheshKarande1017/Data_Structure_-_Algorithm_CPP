class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int k=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            k^=nums[i];
        }
        return k;
    }
};