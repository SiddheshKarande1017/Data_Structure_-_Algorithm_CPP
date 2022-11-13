class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string bs="";bool f=false;
        for(int it=0;it<s.length();it++) {
             if(s[it]==' ' && f) {reverse(bs.begin(),bs.end()); temp+=bs+" ";bs="";f=false;}
             else {bs+=s[it]; f=true;}                    
                        }
        reverse(bs.begin(),bs.end()); temp+=bs;
        reverse(temp.begin(),temp.end());
        string ans="";
        bool k=false;int p,j;
        for(int i=0;i<temp.length();i++){
            if(!k) p=i;
            if(temp[i]!=' ') break;
            
        }
        for(int i=temp.length()-1;i>=0;i--){
            if(!k) j=i;
            if(temp[i]!=' ') break;
            
        }
        int count=0;
        for(int i=p;i<=j;i++){
            if(temp[i]==' ') count++;
            else count=0;
            if(count>1) continue;
            
            ans+=temp[i];
        }
        
        return ans;
    }
};