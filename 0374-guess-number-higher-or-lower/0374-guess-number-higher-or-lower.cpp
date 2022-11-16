/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int m=n;
        if(guess(l)==0) return l;
        if(guess(m)==0) return m;
        while(m-l>1)
        {
            int mid=l+(m-l)/2;
            if(guess(mid)==0)
            {
                return mid;
            }
            else if(guess(mid)==-1)
            {
                m=mid;
                
            }
            else if(guess(mid)==1)
            {
                l=mid;
            }
        }
        return -1;
    }
};