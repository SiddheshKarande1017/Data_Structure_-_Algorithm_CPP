//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    vector<bool> prime ;
    vector<int> ans;
    void sieve(){
     for (int p = 2; p * p <= 100000; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p<= 100000; p++)
    {
        if(prime[p]) ans.push_back(p);
    }
    
    }
    Node *primeList(Node *head){
        prime.resize(100000,true);
        prime[1]=false;
        prime[0]=false;
        sieve();
        Node *temp=head;
        //cout<<ans.size();
        while(temp)
        {
            if(!prime[temp->val])
            {
                auto u=lower_bound(ans.begin(),ans.end(),temp->val);
                auto v=upper_bound(ans.begin(),ans.end(),temp->val);
                if(u!=ans.begin())
                u--;
                if(abs(*u-temp->val)<=abs(*v-temp->val))
                    temp->val=*u;
                else temp->val=*v;
                //cout<<*u<<" "<<*v<<endl;
            }
            temp=temp->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends