//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int a1=0,a2=0;
    bool k=false;
    if(str[0]=='a')k=true;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='b' && k)
        {
            a1++;
            k=false;
        }
        else if(str[i]=='a' && !k)
        {
            a2++;
            k=true;
        }
    }
    if(str[str.size()-1]=='a') a1++;
    else a2++;
    return min(a1,a2)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends