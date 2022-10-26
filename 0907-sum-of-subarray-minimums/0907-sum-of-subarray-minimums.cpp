class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<pair<int,int>> st;
        vector<int> l(arr.size(),-1),r(arr.size(),arr.size());
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty() && st.top().first>arr[i])
            {
                r[st.top().second]=i;
                st.pop();
            }
            st.push({arr[i],i});
        }
        stack<pair<int,int>> st1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st1.empty() && st1.top().first>=arr[i])
            {
                l[st1.top().second]=i;
                st1.pop();
            }
            st1.push({arr[i],i});
        }
        long long int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            long long int d=((abs(i-l[i])+abs(r[i]-i)-1)+((abs(i-l[i])-1)*(abs(r[i]-i)-1)))%(int)(1e9+7);
            d=d%(int)(1e9+7);
            long long int y=(d*arr[i])%( int )(1e9+7);
            ans+=(y);
            ans=ans%(int)(1e9+7);
           // cout<<l[i]<<" "<<r[i]<<" "<<d<<endl;

        }
        return ans;
    }
};