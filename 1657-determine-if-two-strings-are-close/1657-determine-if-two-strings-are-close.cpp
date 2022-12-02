class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1,mp2;
        for(auto it:word1)
            mp1[it]++;
        for(auto it:word2) mp2[it]++;
        multiset<int>m1,m2;
        for(auto it:mp1)
        {
            m1.insert(it.second);
            auto it1=mp2.find(it.first);
            if(it1!=mp2.end())
            {
                m2.insert(it1->second);
            }
            
        }
        return m1==m2;
        
    }
};