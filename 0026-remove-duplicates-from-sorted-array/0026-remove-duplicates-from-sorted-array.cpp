class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), i, j; // two pointer, i slow, j fast
        i=0;j=1;
        while(j<len)
        {
             if(nums[i] != nums[j])
			   { i++;nums[i] = nums[j];}
            j++;
            
        }

	    return i + 1; // number of unique elements
    }
};