class Solution {
public:
    bool ans(vector<int> weights, int days, int mid)
    {
        //cout<<mid<<endl;
        int d=1;int y=0;
        for(auto it:weights)
        {
            y+=it;
            if(y>mid)
            {
                d++;
                y=it;
               // cout<<it<<" ";
            }
            if(it>mid) return false;
            
        }
         if(y>mid)
            {
                d++;
               // y=it;
            }
      //  cout<<endl;
        return d<=days;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=0,hi=INT_MAX;
        while(hi-lo>1)
        {
            int mid=lo+(hi-lo)/2;
            if(ans(weights,days,mid))
            {
                hi=mid;
            }
            else
                lo=mid;
        }
        if(ans(weights,days,lo)) return lo;
        return hi;
    }
};