class Solution
{
    public:
        int ans(vector<string> &arr, int i, map<char, int> &mp, string &st)
        {
            if (i >= arr.size())
            {
                if (st.size() == mp.size()) return st.size();
                return INT_MIN;
            }
            for (auto &it: arr[i]){ mp[it]++;st.push_back(it);}
            
            int take = ans(arr, i + 1, mp,st );
            for (auto &it: arr[i])
            {
                mp[it]--;
                if (mp[it] <= 0) mp.erase(it);
                st.pop_back();
            }
            int nt = ans(arr, i + 1, mp, st);

            return max(take, nt);
        }
    int maxLength(vector<string> &arr)
    {
        map<char, int> mp;
       	// vector<vector<vector < int>>> dp(arr.size()+5,vector<vector<int>>(600,vector < int>(600,-1)));
        string st="";
        return ans(arr, 0, mp, st);
    }
};