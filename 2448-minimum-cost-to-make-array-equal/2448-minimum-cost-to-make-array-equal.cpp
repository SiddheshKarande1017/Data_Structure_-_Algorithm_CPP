class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long maxi=INT_MAX;
        vector<pair<int,int>> vec;
        long long j=0;
        for(int i=0;i<nums.size();i++)
        {
            vec.push_back({nums[i],cost[i]});
            j+=cost[i];
        }
        sort(vec.begin(),vec.end());
        long long k=(j+1)/2;
        long long  u=0;
        long long an=-1;
        for(auto it:vec)
        {
            u+=it.second;
            if(u>=k)
            {
                an=it.first;break;
            }
        }
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            long long h=(long long)(abs(nums[i]-an)*cost[i]);
            ans+=h;
        }
        return ans;
        
    }
};