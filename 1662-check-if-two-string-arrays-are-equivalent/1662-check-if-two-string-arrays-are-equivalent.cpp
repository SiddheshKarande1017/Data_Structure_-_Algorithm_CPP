class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         string a1="",a2="";
        for(auto &it:word1)
            a1+=it;
        for(auto &it:word2)
            a2+=it;
        return a1==a2;
    }
};