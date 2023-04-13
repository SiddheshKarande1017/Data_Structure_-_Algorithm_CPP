class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        set<int> st;
        stack<int> sk;
        int j=0;
        for(int i=0;i<popped.size();i++)
        {
            while(j<pushed.size() && st.find(popped[i])==st.end())
            {
                sk.push(pushed[j]);
                st.insert(pushed[j]);
                j++;
            }
            while(!sk.empty() && sk.top()!=popped[i]) sk.pop();
            if(sk.empty()) return false;
            sk.pop();
        }
        return true;
    }
};