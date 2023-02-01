class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans;bool r=false;
        if(str1.size()<=str2.size())
        {
         ans=str1;
        set<char> st;
            for(auto it:str1) st.insert(it);
        for(int i=0;i<str1.size();i++)
        {
            string temp="";bool k=false;int u=0;
            for(int j=i;j<str1.size();j++)
            {
                if(u>=ans.size()) break;
                if(str1[j]!=ans[u])
                {
                    k=true;
                    break;
                }
            temp+=str1[j];
                u++;
            }
            if(!k)
            {
                if(temp.size()>=st.size())
                {if(temp.size()<ans.size()) ans=temp;}
            }
        }
        int y=0;
        int j=0;
        
        while(y<str2.size())
        {
            if(str2[y]!=ans[j])
            {
                r=true;break;
            }
            j=((j+1)%ans.size());
            y++;
            
        }
        }
        else
        {
            ans=str2;
            set<char> st;
            for(auto it:str1) st.insert(it);
        for(int i=0;i<str2.size();i++)
        {
            string temp="";bool k=false;int u=0;
            for(int j=i;j<str2.size();j++)
            {
                if(u>=ans.size()) break;
                if(str2[j]!=ans[u])
                {
                    k=true;
                    break;
                }
            temp+=str1[j];
                u++;
            }
            if(!k)
            {
                if(temp.size()>=st.size())
                {if(temp.size()<ans.size()) ans=temp;}
            }
        }
        int y=0;
        int j=0;
        
        while(y<str1.size())
        {
            if(str1[y]!=ans[j])
            {
                r=true;break;
            }
            j=((j+1)%ans.size());
            y++;
            
        }
        }
        if(r) return "";
       // return ans;
        int u=gcd(str1.size()/ans.size(), str2.size()/ans.size());
        string temp=ans;
        u--;
        while(u>0)
        {
            ans+=temp;
            u--;
        }
        
        return ans;
    }
};