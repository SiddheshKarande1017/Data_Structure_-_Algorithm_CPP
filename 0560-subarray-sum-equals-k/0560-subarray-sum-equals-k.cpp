class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        //if(k==0) return 0;
        int sum=0;
        mp[sum]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
          
                int d=sum-k;
                auto it=mp.find(d);
                if(it!=mp.end())
                {
                    ans+=it->second;//cout<<i<<endl;
                }
            
           mp[sum]++;

        }
        return ans;
    }
};