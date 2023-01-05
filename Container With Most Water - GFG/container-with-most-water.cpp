//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int i=0;
    int j=len-1;
    long long ans=0;
    while(i<j)
    {
        long long p=min(A[i],A[j])*abs(j-i);
        ans=max(ans,p);
        if(A[i]<A[j]) i++;
        else j--;
        
    }
    return ans;
}
// Input:
// N = 4
// a[] = {1,5,4,3}
// Output: 6
// Explanation: 5 and 3 are distance 2 apart.
// So the size of the base = 2. Height of
// container = min(5, 3) = 3. So total area
// = 3 * 2 = 6.

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends