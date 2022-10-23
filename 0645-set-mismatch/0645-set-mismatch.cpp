class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int y=0;
        int d=1;
        bool k=false;
        int rep;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]==nums[j-1]){ rep=nums[j];break;}
            
        }
        for(int j=0;j<nums.size();j++)
        {
            y^=nums[j];
            y^=d;
            d++;
        }
        y^=rep;
        ans.push_back(rep);
        ans.push_back(y);
       
        
        return ans;
    }
};