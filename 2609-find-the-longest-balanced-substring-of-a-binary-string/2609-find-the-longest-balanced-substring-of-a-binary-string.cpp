class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int i=0,j=0,p=0;
        int ans=0;
       bool k=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0' && !k)
            {
                j=1;
                k=true; p=0;
            }
            else if(s[i]=='0'){ j++;p=0;}
            else
            {
                p++;
                ans=max(ans,min(j,p)); k=false;
            }
            
        }
        return ans*2;
    }
};