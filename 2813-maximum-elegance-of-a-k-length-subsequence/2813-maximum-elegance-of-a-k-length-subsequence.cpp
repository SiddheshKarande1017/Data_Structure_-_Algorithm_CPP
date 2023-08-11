class Solution {
public:
    
    long long findMaximumElegance(vector<vector<int>>& items, int k) {
        sort(items.begin(), items.end(), greater<vector<int>>());
        long long ans=0;
        map<int, int> mp;
        long long res=0;
        for(int i=0;i<k;i++)
        {
            ans+=items[i][0];
            mp[items[i][1]]++;
        }
        
        ans+=(mp.size()*mp.size());
        long long sz=mp.size();
        res=ans;
        int j=k-1;
        for(int i=k;i<items.size();i++)
        {
            if(mp.find(items[i][1])==mp.end())
            {
                while(j>=0 && mp[items[j][1]]<2) j--;
                if(j<0) break;
                mp[items[j][1]]--;
                mp[items[i][1]]++;
                
                res-=items[j][0];
                res+=items[i][0];
                res-=(sz*sz);
                sz=mp.size();
                res+=(sz*sz);
                j--;
                ans=max(ans,res);
            }
        }
         return ans;
    }
};