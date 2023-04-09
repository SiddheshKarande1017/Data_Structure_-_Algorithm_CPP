class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char> st={'q','w','e','r','t','y','u','i','o','p'};
        set<char> st1={'a','s','d','f','g','h','j','k','l'};
        set<char> st2={'z','x','c','v','b','n','m'};
        vector<string> ans;
        for(auto it:words)
        {
            bool k=true;
            for(auto ik:it)
            {
                char ch = tolower(ik);
                if(st.find(ch)==st.end()) k=false;
            }
            if(k) {ans.push_back(it);continue;}
            k=true;
            for(auto ik:it)
            {
                char ch = tolower(ik);
                if(st1.find(ch)==st1.end()) k=false;
            }
            if(k) {ans.push_back(it);continue;}
            k=true;
            for(auto ik:it)
            {
                char ch = tolower(ik);
                if(st2.find(ch)==st2.end()) k=false;
            }
            if(k) {ans.push_back(it);continue;}
            k=true;
        }
        return ans;
    }
};