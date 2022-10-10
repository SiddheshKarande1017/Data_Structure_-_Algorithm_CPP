class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		// unordered map to store array element with respective index
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            if(mp.find(target-nums[i])!=mp.end()) // if target - nums[i] value found in map
                return {i,mp[target-nums[i]]};
            else
                mp[nums[i]]=i; 
        }
        return {};
    }
};