class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp,mp2;
        for(auto it:t){mp[it]++;}
        int i=0,j=0;
        int st=-1,e=-1; bool f=false;
        while(j<s.size())
        {
            mp2[s[j]]++;
            for(auto &ik:mp)
            {
                if(ik.second>mp2[ik.first])
                {
                    f=true;
                }
            }
            if(!f)
            {
                if((j-i+1)<=(e-st+1) || st==-1)
                {st=i;e=j;}
                mp2[s[i]]--;
                i++;
                while(i<s.size() && mp.find(s[i])==mp.end()){mp2[s[i]]--;i++;}
                mp2[s[j]]--;
                j--;
            }
            f=false;
            j++;
            
        }
        j--;
         for(auto &ik:mp)
        {
                if(ik.second>mp2[ik.first])
                {
                    f=true;
                }
           }
         if(!f)
            { //cout<<"ok"<<endl;
                if((j-i+1)<=(e-st+1)|| st==-1)
                st=i;e=j;
                mp2[s[i]]--;
                i++;
                while(i<s.size() && mp.find(s[i])==mp.end()){mp2[s[i]]--;i++;} 
                
            }
        //cout<<st<<" "<<e;
        if(st==-1) return "";
        string ans=s.substr(st,(e-st+1));
        return ans;
    }
};