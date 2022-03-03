/*Good Program Problem Code: NIBBLESolvedSubmit
In computing, the collection of four bits is called a nibble.

Chef defines a program as:

Good, if it takes exactly X nibbles of memory, where X is a positive integer.
Not Good, otherwise.
Given a program which takes N bits of memory, determine whether it is Good or Not Good.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
The first and only line of each test case contains a single integer N, the number of bits taken by the program.
Output Format
For each test case, output Good or Not Good in a single line. You may print each character of Good or Not Good in uppercase or lowercase (for example, GoOd, GOOD, good will be considered identical).

Constraints
1≤T≤1000
1≤N≤1000
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
4
8
17
52
3
Sample Output 1 
Good
Not Good
Good
Not Good*/

#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define ld long  double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define ci(p) scanf("%d",&p)
#define cl2(p,q) scanf("%lld%lld",&p,&q)
#define cl3(p,q,r) scanf("%lld%lld%lld",&p,&q,&r)
#define cl(p) scanf("%lld",&p)
#define cis(s) scanf("%s",s)
#define pi(p) printf("%d",p)
#define pl(x)   printf("%lld",x)
#define ps(s)   printf("%s",s)
#define fi0(i,n) for(int i=0;i<n;i++)
#define fl0(i,n) for(ll i=0;i<n;i++)
#define wh(t) ll t;cin>>t;while(t--)
#define pg printf(" ")
#define pe printf("\n") 
#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
////////////////////
bool is_prime(ll x){for(int i=2;i*i<=x;i++) if(x%i==0) return 0; return 1;}
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 

template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));} 

int main(){
	int tst;
	cin>>tst;
	while(tst--){
		int n;
		cin>>n;
		if(n%4)
			cout<<"NOT GOOD"<<endl;
		else
			cout<<"GOOD"<<endl;

	}
}