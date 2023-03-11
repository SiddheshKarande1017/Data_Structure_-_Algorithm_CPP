//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
       map<int, vector<int>> mp;
       for(int i=0;i<N;i++)
       {
           mp[A[i]].push_back(i);
       }
       vector<int> ans;
       for(auto it:Q)
       {
           int ans1=0;
           for(int i=it[0];i<=it[1];i++)
           {
               vector<int> v=mp[A[i]];
               int y;
               if(i==0)y=v.size();
               else
               y=v.size()-(lower_bound(v.begin(),v.end(),i)-v.begin());
               if(y==it[2]) ans1++;
               //cout<<i<<" "<<y<<endl;
           }
           ans.push_back(ans1);
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends