class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        int p=pref[0];
        ans.push_back(p);
        for(int i=1;i<pref.size();i++)
        {
            int d=p^pref[i];
            ans.push_back(d);
            p=p^d;
        }
        return ans;
        
    }
};