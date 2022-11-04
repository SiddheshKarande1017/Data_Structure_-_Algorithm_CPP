class Solution {
public:
    bool pal(string s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
         return true;
    }
    bool isPalindrome(string s) {
        string an="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='0' && s[i]<='9')) an.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z') an.push_back(s[i]+32);
            
        }
        //cout<<an<<endl;
        return pal(an);
    }
};