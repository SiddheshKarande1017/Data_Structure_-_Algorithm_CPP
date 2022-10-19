class Solution
{
    public:
        vector<string> topKFrequent(vector<string> &words, int k)
        {
            map<string, int> mp;
            for (auto it: words)
            {
                mp[it]++;
            }
            priority_queue<pair<int, string>> p1;
            for (auto it: mp)
            {
                p1.push({ it.second,
                    it.first });
            }
            vector<string> ans;
            map<int, vector < string>> mp1;
            int prev = p1.top().first;
            for (int i = 0; i < k; i++)
            {
                if (p1.empty()) break;
                if (p1.top().first == prev) i--;
                mp1[p1.top().first].push_back(p1.top().second);
                prev = p1.top().first;
                p1.pop();
            }
           	// map<int, string>::reverse_iterator it;
            //cout << mp1.begin()->second.size();
            for (auto it = mp1.rbegin(); it != mp1.rend(); it++)
            {
                sort(it->second.begin(), it->second.end());
                for (auto u: it->second)
                {
                    ans.push_back(u);
                }
            }
            vector<string> jj;
            for (int i = 0; i < k; i++)
            {
                jj.push_back(ans[i]);
            }
            return jj;
        }
};