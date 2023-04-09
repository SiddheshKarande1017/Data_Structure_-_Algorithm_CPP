class Solution {
public:
    set<vector<int>> ans;
    void rec(vector<int> nums, int i)
    {
        if(i>=nums.size()) {return;}
        ans.insert(nums);
        for(int j=0;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            rec(nums,i+1);
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        rec(nums,0);
        vector<vector<int>> a;
        for(auto ik:ans)
        {
            a.push_back(ik);
        }
        return a;
    }
};