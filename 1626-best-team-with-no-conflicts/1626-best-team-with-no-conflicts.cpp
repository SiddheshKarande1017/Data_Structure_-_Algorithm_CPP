class Solution {
public:
    int dp(vector<pair<int,int>>& vec, int i, int y, int pre1, int prev2, vector<vector<int>> &dk)
    {
        if(i>=vec.size())
        {
            return 0;
            
        }
        if(dk[i][y]!=-1) return dk[i][y];
        int nt=dp(vec,i+1,y,pre1,prev2,dk);
        int take=0;
            if(pre1==vec[i].first)
            {
                take=vec[i].second+dp(vec,i+1,i+1,vec[i].first,vec[i].second,dk);
            }
            else
            {
                if(prev2<=vec[i].second)
                {
                    take=vec[i].second+dp(vec,i+1,i+1,vec[i].first,vec[i].second,dk);
                }
            }
        return dk[i][y]=max(nt,take);
        }
           
           
    
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> vec;
        vector<vector<int>> dk(scores.size()+5,vector<int>(scores.size()+5, -1));
        for(int i=0;i<scores.size();i++)
        {
            vec.push_back({ages[i],scores[i]});
        }
        sort(vec.begin(),vec.end());
        return dp(vec,0,0,-1,-1,dk);
        
        
    }
};