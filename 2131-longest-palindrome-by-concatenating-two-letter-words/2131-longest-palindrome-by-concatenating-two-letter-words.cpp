class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp;
        for(auto it:words)mp[it]++;
        int ans=0;
        // for(auto it:mp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        map<string,int>mp2=mp;
        for(auto it: mp)
        {
            string st=it.first;
            //cout<<st<<endl;
            if(st[0]==st[1])
            {
                
                ans+=((mp2[it.first]/2)*2);
                mp2[it.first]=mp2[it.first]%2;
                if(mp2[it.first]==0) mp2.erase(it.first); //cout<<ans<<endl;
                continue;
            }
            string f="";
            f+=st[1];
            f+=st[0];
            auto ik=mp2.find(f);
            if(ik!=mp2.end())
            {
                int p=min(ik->second,mp2[it.first]);
                mp2[it.first]-=p;
                if(mp2[it.first]==0) mp2.erase(it.first);
                mp2[ik->first]-=p;
                if(mp2[ik->first]==0) mp2.erase(ik->first);
                ans+=(2*p);
            }
            //cout<<ans<<endl;
        }
        ans=ans*2;
        //cout<<"ok"<<endl;
        bool kk=false;
        for(auto it:mp2)
        { 
            //cout<<it.first<<" "<<it.second<<endl;
            if(it.first[0]==it.first[1])
            {
                ans+=2;break;
            }
        }
        return ans;
    }
};