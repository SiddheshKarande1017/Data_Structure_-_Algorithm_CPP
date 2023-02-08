//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<bool> v1(n+2,false);
      vector<bool> v2(n+2,false);
      vector<long long int> ans;
      long long int y=n*n;
      int r=0,c=0;
      for(auto it:arr)
      {
          long long int p=0;
        if(!v1[it[0]])
        {
            p=n-c;
            r++;
            //s1.insert(it[0]);
            v1[it[0]]=true;
        }
        if(!v2[it[1]])
        {
            p=p+n-r;
            c++;
            //s2.insert(it[1]);
            v2[it[1]]=true;
        }
        y=y-p;
        ans.push_back(y);
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends