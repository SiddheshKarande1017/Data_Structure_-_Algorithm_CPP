class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
     long long p=0;long long ans=0;//unordered_set<int> st;
        for(long long i=0;i<nums.size();i++){
            if(nums[i]==0)p++;
            else{
                //if(st.find(p)==st.end()){
                   // st.insert(p);
                ans+=((p*(p+1))/2);
                //}
                //else ans+=p;
                p=0;
            }
        }
        if(p!=0)ans+=((p*(p+1))/2);
        return ans;
    }
};