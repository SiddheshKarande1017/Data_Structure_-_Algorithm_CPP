class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it: mp)
        {
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(!pq.empty() && k--)
        {
            auto it=pq.top();
            ans.push_back(it.second);
            pq.pop();
        }
        return ans;
    }
};