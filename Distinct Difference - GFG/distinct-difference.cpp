//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int> v1, v2;
        set<int> st;
        for(auto it:A)
        {
            v1.push_back(st.size());
            st.insert(it);
            
        }
        set<int> sk;
        for(int i=A.size()-1;i>=0;i--)
        {
            v2.push_back(sk.size());
            sk.insert(A[i]);
            
        }
        reverse(v2.begin(),v2.end());
        vector<int> ans;
        for(int i=0;i<A.size();i++)
        {
            //cout<<i<<" "<<v1[i]<<" "<<v2[i]<<endl;
            ans.push_back(v1[i]-v2[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends