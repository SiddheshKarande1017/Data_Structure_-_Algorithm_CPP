class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        string letters;
        for(char t: s) if(isalpha(t)) letters += t;
        for(int i=0,j=letters.size()-1; i<n; ++i)
            if(isalpha(s[i])) s[i] = letters[j--];
        return s;
    }
};