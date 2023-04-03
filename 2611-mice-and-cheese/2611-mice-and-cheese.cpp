class Solution {
public:
   
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<reward1.size();i++)
        {
            pq.push({reward1[i]-reward2[i],i});
        }
        set<int> st;
        
        while(!pq.empty() && k--)
        {
            auto it=pq.top();
            pq.pop();
            st.insert(it.second);
            
        }
        int ans=0;
        for(int i=0;i<reward1.size();i++)
        {
            if(st.find(i)!=st.end())
            {
                ans+=reward1[i];
            }
            else
            {
                ans+=reward2[i];
            }
        }
        return ans;
        
    }
};