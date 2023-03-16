class Solution {
public:
     int check(vector<int> &nums, int target, int y,int z)
     {
         // if(y==0) return -1;
         
         int l=y,r=z-1;
         if(r<l) return -1;
         if(nums[l]==target) return l;
         if(nums[r]==target)return r;
         while(r-l>1)
         {
             int mid=l+(r-l)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]>target) r=mid;
             else l=mid;
         }
         return -1;
     }
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
    int search(vector<int>& nums, int target) {
        if(nums.size()==1) {
            if(nums[0]==target) return 0;
            else return -1;
        }
        int y=ptrotate(nums);
        // cout<<y<<endl;
        int k=check(nums,target,0,y);
        if(k!=-1) return k;
        k=check(nums,target,y,nums.size());
        return k;

    }
};