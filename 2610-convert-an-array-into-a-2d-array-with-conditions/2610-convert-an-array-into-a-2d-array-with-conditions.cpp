class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums) mp[it]++;
        int maxi=0;
        for(auto ik:mp)
        {
            maxi=max(maxi,ik.second);
        }
        map<int,vector<int>>mp1;
        int j=0;
//         for(auto it:mp)
//         {
            
//                 cout<<it.first<<" "<<it.second<<endl;
        
//         }
        for(auto it:mp)
        {
            // j=0;
            for(int j=0;j<it.second;j++)
            {
                mp1[j].push_back(it.first);
                //j++;
            }
        }
        vector<vector<int>> vec;
        for(auto it:mp1) vec.push_back(it.second);
        return vec;
    }
};