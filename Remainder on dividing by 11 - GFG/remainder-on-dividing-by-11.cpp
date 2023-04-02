//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       string ans="";
       string temp="";
       for(int i=0;i<x.size();i++)
       {
           temp+=x[i];
           int y=stoi(temp);
           if(y>=11)
           {
               int l=y%11;
               temp=to_string(l);
           }
       }
       return stoi(temp);
    
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends