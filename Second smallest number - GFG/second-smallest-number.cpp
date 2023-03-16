//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here 
        int arr[D];
        if(S==1 || D==1 || (9*D)<=S) return "-1";
        int sum=0;
        for(int i=D-1;i>=0;i--)
        {
            for(int j=9;j>=0;j--)
            {
                int p=sum+j;
                if(p<=S )
                {
                    if(i==0)
                    {
                    sum=p;
                    arr[i]=j;
                    break;
                        
                    }
                    else
                    {
                        if(abs(S-p)>=1)
                        {
                            sum=p;
                            arr[i]=j;
                             break;
                        }
                    }
                }
            }
        }
        // for(int i=0;i<D;i++)
        // {
        //     cout<<arr[i];
        // }
        // cout<<endl;
        int y=D-1;
        while(arr[y]==9)
        {
            y--;
        }
        if(y==D-1)
        {
            // cout<<"ok";
            arr[y-1]++;
            arr[y]--;
        }
        else
        {
            arr[y]++;
            arr[y+1]--;
        }
        string ans;
        for(int i=0;i<D;i++)
        {
            // cout<<arr[i]<<endl;
            ans+=to_string(arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends