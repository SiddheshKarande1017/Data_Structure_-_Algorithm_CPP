class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int> ans;
        for(auto it:nums)
        {
            if(it!=0) ans.push_back(it);
            
        }
        int p=0;
        while(p<ans.size())
        {
            nums[p]=ans[p];
            p++;
        }
        while(p<nums.size())
        {
            nums[p]=0;
            p++;
        }
    
        
    }
};