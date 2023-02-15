class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry=0;
        for(int i=num.size()-1;i>=0;i--)
        {
            int y=num[i]+k%10+carry;
            //cout<<y<<" "<<carry<<endl;
            k=k/10;
             carry=y/10;
           // cout<<carry<<endl;
            ans.push_back(y%10);
        }
        while(k>0)
        {
            int y=k%10+ carry;
             carry=y/10;
            k=k/10;
            ans.push_back(y%10);
        }
        if(carry!=0) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};