class Solution {
public:
    bool y=false;
    
    void ans(vector<vector<char>> &board, string word, string temp,int i, int j,vector<vector<bool>> &vis,int k)
    {
        if(k==word.size()){ y=true;return;}
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || vis[i][j] || board[i][j] != word[k]) return ;
        // if() return ;
         vis[i][j]=true;
        //  char c = board[i][j];
        // board[i][j] = '*';

        ans(board,word,temp+(char)board[i][j],i+1,j,vis,k+1);
        ans(board,word,temp+(char)board[i][j],i-1,j,vis,k+1);
        ans(board,word,temp+(char)board[i][j],i,j+1,vis,k+1);
        ans(board,word,temp+(char)board[i][j],i,j-1,vis,k+1);
        //board[i][j] = c;
        vis[i][j]=false;
       
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool k=false;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(word[0]==board[i][j])
                {
                    vector<vector<bool>> vis(board.size()+3,vector<bool>(board[0].size()+3,false));
                   // y=false;
                   ans(board,word,"",i,j,vis,0);
                    if(y) return y;
                }
            }
        }
        return false;
    }
};