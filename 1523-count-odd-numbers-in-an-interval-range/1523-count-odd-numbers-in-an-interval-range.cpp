class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        while(low<=high)
        {
            if(low%2!=0) ans++;
            low++;
        }
        return ans;
    }
};