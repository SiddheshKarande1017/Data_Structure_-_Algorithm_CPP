class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        map<int,set<char>>mp2;
        for(auto it:s) mp[it]++;
        for(auto it:mp)
        {
            mp2[it.second].insert(it.first);
        }
        string ans="";
        for(auto it:mp2)
        {
            set<char>::reverse_iterator rit; 
            for (rit = it.second.rbegin(); rit != it.second.rend(); rit++)
            {
                int k=it.first;
                while(k--)
                {
                    //cout<<*rit<<endl;
                    ans+=(char)*rit;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};