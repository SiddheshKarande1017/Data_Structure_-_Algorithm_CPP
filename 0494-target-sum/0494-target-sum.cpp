class Solution {
public:
    int ans(vector<int> &nums,int target, int i, int val,map<int,vector<int>>&mp)
    {
        if(i>=nums.size())
        {
            if(val==target) return 1;
            return 0;
        }
        if(mp[val][i]!=-1) return mp[val][i];
        int plus=ans(nums,target,i+1,val+nums[i],mp);
        int minus=ans(nums,target,i+1,val-nums[i],mp);
        return mp[val][i]=plus+minus;
        
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        map<int,vector<int>>mp;
        for(int i=-1001;i<=1002;i++)
        {
            mp[i]=vector<int>(22,-1);
        }
        return ans(nums,target,0,0,mp);
    }
};