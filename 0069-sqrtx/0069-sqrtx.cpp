class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int lo=1,hi=x;
        while(hi-lo>1)
        {
            long long int mid=lo+(hi-lo)/2;
            if((mid*mid)==x) return mid;
            else if((mid*mid)>x) hi=mid;
            else lo=mid;
        }
        return lo;
    }
};