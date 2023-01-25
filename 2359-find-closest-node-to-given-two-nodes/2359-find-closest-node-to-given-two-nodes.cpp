class Solution {
public:
    map<int,int> ans1,ans2;
    void ans(map<int,vector<int>> &mp, int dist, vector<bool> &vis1, int p)
    {
        vis1[p]=true;
        ans1[p]=dist;
        for(auto &it:mp[p])
        {
            if(!vis1[it])
            {
                ans(mp,dist+1,vis1,it);
                
            }
            

        }
    }
    void ansy(map<int,vector<int>> &mp, int dist, vector<bool> &vis, int p)
    {
        vis[p]=true;                
        ans2[p]=dist;
        for(auto &it:mp[p])
        {
            if(!vis[it])
            {
                ansy(mp,dist+1,vis,it);
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++)
        {
            if(edges[i]==-1)continue;
            mp[i].push_back(edges[i]);
        }
        vector<bool>vis1(edges.size()+5,false);
        vector<bool>vis2(edges.size()+5,false);
         ans(mp,0,vis1,node1);
        ansy(mp ,0,vis2,node2);
         int maxi=INT_MAX;int ans3=-1;
       // for(auto it:ans2) cout<<it.first<<" "<<it.second<<endl;
            for(auto it:ans1)
        {
            auto iy=ans2.find(it.first);
            if(iy!=ans2.end())
            {
                //cout<<max(it.second,iy->second)<<endl;
                if(maxi>max(it.second,iy->second))
                { //cout<<"ok";
                    ans3=it.first;
                    maxi=max(it.second,iy->second);
                }
            }
            
        }
        
        return ans3;
        
    }
};