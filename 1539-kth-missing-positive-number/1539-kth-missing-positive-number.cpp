class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> vec(1000001,0);
        for(auto it:arr) vec[it]=1;
        int j=0;
        int ans=-1;
        for(int i=1;i<1000001;i++)
        {
            if(vec[i]==0){ans=i; j++;}
            if(j==k) break;
        }
        return ans;
    }
};