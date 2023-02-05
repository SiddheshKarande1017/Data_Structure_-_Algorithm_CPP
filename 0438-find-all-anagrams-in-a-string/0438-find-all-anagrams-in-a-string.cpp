class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> mp1,mp2;
        int k=0;
        for(;k<p.size();k++)
        {
            mp1[p[k]]++;
            mp2[s[k]]++;
        }
        vector<int> ans;
        int ind=0;
        if(mp1==mp2)
        {
                ans.push_back(ind);
          }
        for(;k<s.size();k++)
        {
            
            mp2[s[ind]]--;
            mp2[s[k]]++;
            if(mp2[s[ind]]==0) mp2.erase(s[ind]);
            ind++;
            //for(auto it:mp2) cout<<it.first<<" ";cout<<endl;
            if(mp1==mp2)
            {
                ans.push_back(ind);
            }
        }
        return ans;
    }
};