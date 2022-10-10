class Solution {
public:
    string robotWithString(string s) {
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>> pq;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            pq.push({s[i],i});
        }
        int maxi=0;
        string ans="";
        while(!pq.empty())
        {
            auto it=pq.top();
            if(it.second>=maxi)
            {
               if(st.size()==0){
                    ans.push_back(s[pq.top().second]);
                    for(int i=maxi;i<pq.top().second;i++){
                        st.push(s[i]);
                    }
                    maxi=pq.top().second+1;
                    pq.pop();
                   
                }
                else{
                    while(st.size()>0 && st.top()<=pq.top().first){
                        ans.push_back(st.top());
                        st.pop();
                    }
                    for(int i=maxi;i<pq.top().second;i++){
                        st.push(s[i]);
                    }
                    maxi=pq.top().second+1;
                    ans.push_back(pq.top().first);
                    pq.pop();
                }
            }
            else
            {
                pq.pop();
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};