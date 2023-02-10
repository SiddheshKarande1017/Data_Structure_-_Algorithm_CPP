class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<pair<int,int>> land;
        vector<pair<int,int>> water;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1) land.push_back({i,j});
                else water.push_back({i,j});
            }
        }
        if(land.size()==0 || water.size()==0) return -1;
        int ans=-1;
        for(auto &x:water){
            int dist=INT_MAX;
            for(auto &y:land){
                dist=min(dist,abs(x.first-y.first)+abs(x.second-y.second));
            }
            ans=max(ans,dist);
        }
        return ans;
        
    }
};