class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> pre;
        int sum=0;
        set<int> st;
        int prev=0;
        for(int i=0;i<nums.size();i++){
             sum=sum+nums[i];
            int u=sum%k;
            if(st.find(u)!=st.end()) return true;
            st.insert(prev%k);
            prev=sum;
            
        }
        return false;
    }
};