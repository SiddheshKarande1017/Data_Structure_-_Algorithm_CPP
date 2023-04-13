class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int>ans;
        vector<int>temp;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]==c)
            temp.push_back(i);
        }
        int ind1=0;
        int n=temp.size();
        for (int i=0;i<s.size();i++)
        {
            if(ind1==n-1)
            {
                ans.push_back(abs(i-temp[ind1]));
            }
            else{
                if (abs(i-temp[ind1])>abs(i-temp[ind1+1]))
                {
                    ind1++;
                    ans.push_back(abs(i-temp[ind1]));
                }
                else{
                    ans.push_back(abs(i-temp[ind1]));
                }
            }
        }
        return ans;
    }
};