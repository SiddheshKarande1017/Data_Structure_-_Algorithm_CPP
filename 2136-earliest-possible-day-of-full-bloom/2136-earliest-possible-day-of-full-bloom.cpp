class Solution {
public:
   static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
    {
       if(a.first==b.first) return a.second>b.second;
    return (a.first > b.first);
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>pq;
        for(int i=0;i<plantTime.size();i++)
        {
            pq.push_back({growTime[i],plantTime[i]});
        }
        sort(pq.begin(),pq.end(),sortbysec);
        int pday=0,maxi=0;
        for(auto it:pq)
        {
            pday=pday+it.second;
            maxi=max(maxi,pday+it.first+1);
            //cout<<pday<<" "<<maxi;
        }
        return maxi-1;
    }
};