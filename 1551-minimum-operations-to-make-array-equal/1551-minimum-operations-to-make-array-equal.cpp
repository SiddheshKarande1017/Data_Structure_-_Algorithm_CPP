class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        if(n%2==0)
        {
            int t1=(n/2) -1;
            int target=((2*t1)+1+(2*(t1+1))+1)/2;
            for(int i=0;i<=t1;i++)
            {
                int u=(2*i)+1;
                ans+=(abs(target-u));
            }
        }
        else
        {
            int t1=n/2;
            int target=(2*t1)+1;
            for(int i=0;i<=t1;i++)
            {
                int u=(2*i)+1;
                ans+=(abs(target-u));
            }
        }
        return ans;
    }
};