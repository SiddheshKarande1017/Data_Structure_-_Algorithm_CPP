class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> a;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            string st=strs[i];
            sort(st.begin(),st.end());
            a[st].push_back(i);
        }
        for(auto &it:a)
        {
            vector<string >t;
            for(auto &ik:it.second)
            {
                t.push_back(strs[ik]);
            }
            ans.push_back(t);
                
        }
        return ans;
    }
};