class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones=0,z=0;
        vector<int> a1;
        vector<int> a2;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1') ones++;
            else z++;
            a1.push_back(ones);
            a2.push_back(z);
        }
        reverse(a1.begin(),a1.end());
        reverse(a2.begin(),a2.end());
        int ans=INT_MAX;
        int one1=0,zero=0;
        // for(auto it:a1) cout<<it<<" ";cout<<endl;
        // for(auto it:a2) cout<<it<<" ";cout<<endl;
        for(int i=0;i<s.size();i++)
        {
            int n1=0,no=0;
            n1=one1+a2[i];
            no=one1+a1[i];
            int k=min(n1,no);
           // cout<<i<<" "<<n1<<" "<<no<<endl;
            ans=min(ans,k);
            if(s[i]=='1') one1++;
            else zero++;
        }
        return ans;
        
    }
};