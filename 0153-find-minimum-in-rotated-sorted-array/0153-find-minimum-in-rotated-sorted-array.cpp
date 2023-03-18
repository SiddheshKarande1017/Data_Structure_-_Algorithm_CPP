class Solution {
public:
     int ptrotate(vector<int> &arr)
    {
        // vector<nums>
        int l=0,r=arr.size()-1;
        if(arr[r]<arr[r-1] && arr[r]<arr[0]) return r;
        if(arr[0]<arr[1] && arr[0]<arr[r] ) return 0;
        while(abs(l-r)>=1)
        {
            
            int mid=l+(r-l)/2;
            //ut<<mid<<endl;
            
            if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[l] && arr[mid]>arr[r])
            {
                l=mid;
            }
            else if(arr[mid]<arr[l] && arr[mid]<arr[r])
            {
                r=mid;
            }
            
        }
        return -1;
        
        
    }
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int u=ptrotate(nums);
        return nums[u];
    }
};