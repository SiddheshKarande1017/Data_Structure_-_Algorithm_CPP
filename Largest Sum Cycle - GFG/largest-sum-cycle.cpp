//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  bool k=false;
  map<long long,long long> s;
  long long  maxi=-1;
  void dfs(map<int,vector<int>>&mp, int st, vector<bool> &vis, long long count, int par, vector<bool> &dfsvis)
  {
      vis[st]=true;
      dfsvis[st]=true;
      s[st]=count;
      //cout<<par<<" "<<st<<endl;
      for(auto it:mp[st])
      {
          if(!vis[it])
          {
              dfs(mp,it,vis,count+it,st,dfsvis);
          }
          else if(dfsvis[it])
          {
              //cout<<it<<" "<<par<<endl;
              if(mp[it].size()==0) continue;
              k=true;
              long long t=s[it]-it;
              long long a=s[st]-t;
              maxi=max(maxi,a);
          }
          
      }
      dfsvis[st]=false;
  }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
    map<int,vector<int>>mp;
    
    for(int i=0;i<N;i++)
    {
        if(Edge[i]==-1) continue;
        mp[i].push_back(Edge[i]);
        //mp[Edge[i]].push_back(i);
    }
    //for(auto it:mp){cout<<it.first; for(auto ik:it.second) cout<<ik; cout<<endl; }cout<<endl;
    vector<bool>vis(N,false);
    maxi=-1;
    k=false;
    vector<bool>dfsvis(N,false);
     for(long long i=0;i<N;i++)
    {
        if(!vis[i])
         {dfs(mp,i,vis,i,-1,dfsvis);}
     }
     if(k)
    return maxi;
    return -1;
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends