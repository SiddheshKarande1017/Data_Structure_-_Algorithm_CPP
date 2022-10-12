class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        int i, n=a.size();
        sort(a.begin(),a.end());
        for(i=n-3;i>=0;i--) {
            if(a[i]+a[i+1]>a[i+2]) return a[i]+a[i+1]+a[i+2]; 
        }
        return 0;
    }
};