class Solution {
public:
   
    long long putMarbles(vector<int>& weights, int k) {
        if (k == 1 || weights.size() == k) return 0;
        vector<long long > vec;
        for(int i=0;i<weights.size()-1;i++)
        {
            vec.push_back(weights[i]+weights[i+1]);
        }
        sort(vec.begin(),vec.end());
        long long m1=0, m2=0;
        for(int i=0;i<k-1;i++)
        {
            m1+=vec[i];
            m2+=(vec[vec.size()-1-i]);
            
        }
        
        return m2-m1;
    }
};