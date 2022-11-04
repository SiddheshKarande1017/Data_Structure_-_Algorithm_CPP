class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int y=0;
        int k=x;
        while(k)
        {
            y=y*10+(k%10);
            k=k/10;
        }
        return y==x;
    }
};