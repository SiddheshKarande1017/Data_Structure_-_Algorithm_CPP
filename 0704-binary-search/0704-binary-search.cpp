class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int res = -1;
        
        while(st <= end) {
            int mid = st + (end - st)/2;
            if(nums[mid] == target) {
                res = mid;
                break;
            }
            
            else if(nums[mid] > target) end = mid - 1;
            else st = mid + 1;
        }
        
        return res;
    }
};