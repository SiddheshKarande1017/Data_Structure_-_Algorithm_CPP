//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid, int i,int j,vector<vector<bool>> &vec )
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return ;
        if(grid[i][j]=='0' || vec[i][j]) return ;
        vec[i][j]=true;
        dfs(grid,i+1,j,vec);
        dfs(grid,i,j+1,vec);
        dfs(grid,i-1,j,vec);
        dfs(grid,i,j-1,vec);
        dfs(grid,i+1,j+1,vec);
        dfs(grid,i+1,j-1,vec);
        dfs(grid,i-1,j+1,vec);
        dfs(grid,i-1,j-1,vec);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        vector<vector<bool>> vec(grid.size()+5,vector<bool>(grid[0].size()+5,false));
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1' && vec[i][j]==false)
                {
                    ans++;
                    dfs(grid,i,j,vec);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends