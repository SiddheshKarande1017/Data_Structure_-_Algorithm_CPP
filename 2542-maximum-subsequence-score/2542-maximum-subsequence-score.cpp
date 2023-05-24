class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        multiset<int> s;
        priority_queue<pair<int,int>> q;
        for(int i=0;i<nums1.size();i++){
            q.push({nums2[i],nums1[i]});
        }
        int y=INT_MAX;
        long long sum=0;
        while(s.size()<k && q.size()>0){
            auto z=q.top();
            q.pop();
            s.insert(z.second);
            y=z.first;
            sum+=z.second;
        }
        long long ans=0;
        ans=sum*y;
        while(q.size()>0){
            auto z=q.top();
            q.pop();
            if(y==z.first){
                if(*s.begin()<z.second){
                    sum-=*s.begin();
                    sum+=z.second;
                    s.erase(s.begin());
                    s.insert(z.second);
                }
                
            }
            else{
                sum-=*s.begin();
                sum+=z.second;
                s.erase(s.begin());
                s.insert(z.second);
                y=z.first;
            }
            ans=max(ans,sum*y);
        }
        
        return ans;
    }
};