class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>>mp;
        for(int i=0;i<groupSizes.size();i++)
        {
            mp[groupSizes[i]].push_back(i);
        }
        map<int,vector<vector<int>>> a;
        for(auto it:mp)
        {
            vector<int> y;
            int i=0;
            for(auto ik:it.second)
            { 
                i++;
                y.push_back(ik);
                if(i%it.first==0)
                {
                    a[it.first].push_back(y);
                    y={};
                }
                
            }
        }
        vector<vector<int>> ans;
         for(auto it:a)
         {
             for(auto ik:it.second) ans.push_back(ik);
         }
        return ans;
        
    }
};