class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;
        for(auto it:nums1)
            st.insert(it);
        set<int> s2;
         
        
        for(auto it:nums2)
        {
            if(st.find(it)!=st.end()&&s2.find(it)==s2.end()) ans.push_back(it);
            s2.insert(it);
        }
        return ans;
    }
};