class Solution {
public:
    set<vector<int>> ans;
    void ans1(int i, vector<int> & nums,vector<int> temp, int prev)
    {
        if(i>=nums.size())
        {
          if(temp.size()>=2) ans.insert(temp);
            return;
            
        }
        ans1(i+1,nums,temp,prev);
        if(prev<=nums[i]){
        temp.push_back(nums[i]);
        ans1(i+1,nums,temp,nums[i]);
        temp.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>t;
        ans1(0,nums,t,-101);
        vector<vector<int>> yt;
        for(auto t:ans)
        {
            yt.push_back(t);
        }
        return yt;
    }
};