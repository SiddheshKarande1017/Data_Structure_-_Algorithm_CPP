class Solution {
public:
    int dp(vector<int> &satisfaction, int i, int k, vector<vector<int>> &sk)
    {
        if(i>=satisfaction.size()) return 0;
        if(sk[i][k]!=-1) return sk[i][k];
        int l=dp(satisfaction, i+1,k,sk);
        int r=k*satisfaction[i]+dp(satisfaction, i+1,k+1,sk);
        return sk[i][k]=max(l,r);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        vector<vector<int>> sk(satisfaction.size()+1,vector<int>(satisfaction.size()+1,-1));
        sort(satisfaction.begin(), satisfaction.end());
        return dp(satisfaction,0, 1, sk);
    }
};