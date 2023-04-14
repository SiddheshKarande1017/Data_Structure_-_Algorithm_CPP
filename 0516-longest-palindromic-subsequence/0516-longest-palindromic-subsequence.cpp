class Solution {
public:

    int dp(string &s, int st, int e, vector<vector<int>>&vec)
    {
        if(st>e) return 0;
        if(st==e) return 1;
        if(vec[st][e]!=-1) return vec[st][e];
        if(s[st]==s[e]) return 2+dp(s,st+1,e-1,vec);
        int p=dp(s,st+1,e,vec);
        int q=dp(s,st,e-1,vec);
        return vec[st][e]=max(p,q);
    }
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> vec(s.size(),vector<int>(s.size(),-1));
        
        return dp(s,0,(int)s.size()-1,vec);
    }
};