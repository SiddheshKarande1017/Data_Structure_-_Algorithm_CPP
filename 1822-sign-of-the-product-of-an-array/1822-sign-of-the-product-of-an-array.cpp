class Solution {
public:
    int signFunc(int x)
    {
        if(x>0) return 1;
        if(x<0) return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        int pro=1;
        for(auto it:nums)
        {
            if(it<0) pro*=-1;
            else if(it==0) pro*=0;
        }
        return signFunc(pro);
    }
};