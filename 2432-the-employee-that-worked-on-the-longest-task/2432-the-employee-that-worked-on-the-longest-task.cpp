class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        map<int,int>mp;
        int prev=0;
        for(int i=0;i<logs.size();i++)
        {
            int p=abs(logs[i][1]-prev);//cout<<p<<endl;
            if(mp[i]!=0)
            mp[i]=min(mp[i],p);
            else mp[i]=p;
            prev=logs[i][1];
        }
       int maxi=INT_MIN;
        for(auto it:mp)
        {
            if(maxi<it.second)
            {
              //  y=it.first;
                maxi=it.second;
            }
        }
        //cout<<maxi<<endl;
        vector<int>ans;
        for(auto it:mp)
        {//cout<<it.first<<" "<<it.second<<endl;
            if(maxi==it.second)
                ans.push_back(logs[it.first][0]);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};