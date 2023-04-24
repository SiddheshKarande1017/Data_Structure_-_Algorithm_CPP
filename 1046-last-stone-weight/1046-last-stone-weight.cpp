class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto it:stones)
        {
            pq.push(it);
        }
        while(!pq.empty())
        {
            if(pq.size()==1) break;
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(abs(a-b)==0) continue;
            pq.push(abs(a-b));
        }
      
        if(pq.empty()) return 0;
        return pq.top();
    }
};