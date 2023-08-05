class Solution {
public:
    set<vector<int>> ans;
    void ans1(vector<int> nums, int i)
    {
        if(i>=nums.size())
        {
            ans.insert(nums);
            return;
        }
        
        for(int j=i;j<nums.size(); j++)
        {
            swap(nums[i],nums[j]);
            ans1(nums, i+1);
            swap(nums[i],nums[j]);
        }
    }

    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a1;
        ans1(nums, 0);
        for(auto it:ans)
        {
            a1.push_back(it);
        }
        return a1;
    }
};