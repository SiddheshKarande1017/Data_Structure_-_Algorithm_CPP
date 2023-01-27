class Solution {

public:
unordered_set<string> dict;
unordered_set<string> formedWords;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
   
    vector<string> result;
    dict = unordered_set<string>(words.begin(), words.end());
    formedWords = unordered_set<string>();
    
    for (auto word : words) {
        if (canbeFormed(word)) {
            result.push_back(word);
        }
    }
    return result;
}

bool canbeFormed(string s) {
    if (formedWords.count(s)) return true;

    for (int i = 1; i < s.length(); i++) {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        if (dict.count(s1)) {
            if (dict.count(s2) || canbeFormed(s2)) {
                formedWords.insert(s);
                return true;
            }
        }
    }
    return false;
}
};