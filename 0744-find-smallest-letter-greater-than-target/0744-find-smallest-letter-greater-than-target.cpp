class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo=0,hi=letters.size()-1;
        while(hi-lo>1)
        {
            int mid=lo+(hi-lo)/2;
            
            if(letters[mid]<=target) lo=mid;
            else hi=mid;
            
        }
        if(letters[lo]>target) return letters[lo];
        if(letters[hi]<=target) return letters[0];
        return letters[hi];
    }
};