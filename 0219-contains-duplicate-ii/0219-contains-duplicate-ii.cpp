class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp)
        {
            vector<int> v=it.second;
            if(it.second.size()>1)
            {
                for(int i=1;i<it.second.size();i++)
                {
                    if(abs(v[i]-v[i-1])<=k) return true;
                }
            }
        }
        return false;
    }
};