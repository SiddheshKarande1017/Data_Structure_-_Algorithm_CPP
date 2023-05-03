class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>v1,v2;
        for(auto it:nums1) s1.insert(it);
        for(auto it:nums2) s2.insert(it);
        for(auto ik:s1) 
        {
            if(s2.find(ik)==s2.end()) v1.push_back(ik);
            
        }
        for(auto it:s2)
        {
            if(s1.find(it)==s1.end()) v2.push_back(it);
        }
        vector<vector<int>> ans;
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};