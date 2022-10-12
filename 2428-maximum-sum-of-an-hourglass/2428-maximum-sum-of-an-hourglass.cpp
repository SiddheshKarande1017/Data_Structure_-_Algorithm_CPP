class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid.size()-i>=3 && grid[0].size()-j>=3)
                {
                    int p1=grid[i][j]+grid[i][j+1]+grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j+1]+grid[i+2][j]+grid[i+2][j+2];
                    maxi=max(maxi,p1);
                }
                else if(grid.size()-i<3 && grid[0].size()-j<3) break;
                else continue;
            }
        }
        return maxi;
    }
};