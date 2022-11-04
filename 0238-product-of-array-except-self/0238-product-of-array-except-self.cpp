class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool k=false;
        int c=0;
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                k=true;c++;continue;
            }
            else
            {
                pro=pro*nums[i];
            }
        }
        if(c>1)
        {
            vector<int> ans(nums.size(),0);
            return ans;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(k && nums[i]!=0) ans.push_back(0);
            else 
            {
                int d=pro;
                if(nums[i]!=0) d=d/nums[i];
                ans.push_back(d);
            }
        }
         return ans;
    }
};