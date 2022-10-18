#include<bits/stdc++.h>
class Solution {
public:
    string ans="";
    void rec(int n,string temp,int p)
    {
       if(p==n)
       {
           ans=temp;return;
       }
        string dk;
        int k=1;
        for(int i=1;i<temp.size();i++)
        {
           // string p=to_string(k);cout<<p;
            if(temp[i]!=temp[i-1])
            {
                dk.append(to_string(k) + temp[i-1]);
                
                k=1;
            }
            else k++;
        }
        dk.append(to_string(k) +temp[temp.size()-1]);
        rec(n,dk,p+1);
        
    }
    string countAndSay(int n) {
        rec(n,"1",1);
        return ans;
    }
};