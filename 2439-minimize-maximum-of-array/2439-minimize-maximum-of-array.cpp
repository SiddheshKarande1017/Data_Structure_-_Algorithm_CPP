class Solution {
public:
    bool check(vector<int> nums,int mid)
    {
        long long int ap=0;
        for(int i=nums.size()-1;i>=1;i--)
        {
            int k=0;
            if(nums[i]>mid)
              {  k=nums[i]-mid;ap+=k;}
            else{
                int u=mid-nums[i];
                if(u>=ap) ap=0;
                else ap-=u;
            }
        }
        if((nums[0]+ap)>mid) return false;
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int maxi=INT_MIN;
        for(auto &it:nums)maxi=max(maxi,it);
        int lo=0,hi=maxi;
        while((hi-lo)>1)
        {
            int mid=lo+(hi-lo)/2;
            if(check(nums,mid))
            {
                hi=mid;
            }
            else lo=mid;
        }
        if(check(nums,lo)) return lo;
        return hi;
    }
};