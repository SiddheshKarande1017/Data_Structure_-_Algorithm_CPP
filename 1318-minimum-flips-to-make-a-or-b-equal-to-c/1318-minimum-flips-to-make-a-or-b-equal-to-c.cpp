class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(c)
        {
            // cout<<a<<" "<<b<<endl;
            if(c&1)
            {
                if(!(a&1 || b&1))
                {
                    ans++;
                    // cout<<"ok1"<<endl;
                    
                }
            }
            else
            {
                if(a&1 && b&1)
                {
                    // cout<<"ok2"<<endl;
                    ans+=2;
                    
                }
                else if(a&1 || b&1)
                {
                    ans++;
                    // cout<<"ok1"<<endl;
                    
                }
            }
           // cout<<c<<endl;
            c=c>>1;
            a=a>>1;
            b=b>>1;
        }
        while(a)
        {
            if(a&1) ans++;
            a=a>>1;
        }
        while(b)
        {
            if(b&1) ans++;
            b=b>>1;
        }
        return ans;
    }
};