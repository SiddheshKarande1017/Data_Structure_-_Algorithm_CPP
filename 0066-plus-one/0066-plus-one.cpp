class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        vector<int> fr(digits.size());
        for(int i=digits.size()-1;i>=0;i--)
        {
            int u=digits[i];
            if(i==digits.size()-1)
             u=digits[i]+1;
            int y=(u%10)+carry;
            //carry=u/10;
            carry=max(y/10,u/10);
            fr[i]=y%10;
            
            
        }
       // cout<<carry;
        vector<int> ans;
        if(carry) ans.push_back(1);
        for(auto it: fr) ans.push_back(it);
        return ans;
    }
};