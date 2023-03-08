class Solution {
public:
    bool check(vector<int> piles, int h, int mid)
    {
        int y=0;
        if(mid==0) return false;
        for(auto it:piles)
        {
            y+=it/mid;
            if(it%mid) 
                y++;
            if(y>h) return false;
            
        }
        return y<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=0,hi=1e9+7;
        while(hi-lo>1)
        {
            int mid=lo+(hi-lo)/2;
            if(check(piles,h,mid))
            {
                hi=mid;
            }
            else
            {
                lo=mid;
            }
        }
        if(check(piles,h,lo)) return lo;
        return hi;
    }
};