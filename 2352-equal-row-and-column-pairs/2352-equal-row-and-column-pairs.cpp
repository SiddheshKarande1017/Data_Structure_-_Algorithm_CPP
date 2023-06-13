class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
       
        for(int i=0;i<grid.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<grid[0].size();j++)
            {
                temp.push_back(grid[i][j]);
            }
            
            for(int p=0;p<grid[0].size();p++)
            {
                vector<int> t2;
                for(int q=0;q<grid.size();q++)
                {
                    t2.push_back(grid[q][p]);
                }
                if(temp==t2) ans++;
            }
//             if(i==0)
//             {
//                 for(auto it:temp) cout<<it<<" ";
//                 cout<<endl;
//                 for(auto it:t2) cout<<it<<" ";
                
//             }
            // if(temp==t2) ans++;
        }
        return ans;
    }
};