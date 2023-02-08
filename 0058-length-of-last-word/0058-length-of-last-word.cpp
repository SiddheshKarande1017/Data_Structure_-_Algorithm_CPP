class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool k=false;
        for(auto it:s)
        {
            if(it==' ') {k=true;continue;}
            else
            {
                if(k)
                {
                    ans=0;
                    ans++;
                    k=false;
                }
                else
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};