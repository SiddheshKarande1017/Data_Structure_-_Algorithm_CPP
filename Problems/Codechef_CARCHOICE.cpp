/*Chef is planning to buy a new car for his birthday. After a long search, he is left with 2 choices:

Car 1: Runs on diesel with a fuel economy of x1 km/l
Car 2: Runs on petrol with a fuel economy of x2 km/l
Chef also knows that

the current price of diesel is y1 rupees per litre
the current price of petrol is y2 rupees per litre
Assuming that both cars cost the same and that the price of fuel remains constant, which car will minimize Chef's expenses?

Print your answer as a single integer in the following format

If it is better to choose Car 1, print −1
If both the cars will result in the same expenses, print 0
If it is better to choose Car 2, print 1
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line containing 4 space-separated integers — x1,x2,y1,y2.
Output Format
For each test case, output in a single line the answer as explained earlier.

Constraints
1≤T≤10000
1≤x1,x2,y1,y2≤50
Sample Input 1 
3
10 5 3 20
7 2 7 2
1 5 3 2
Sample Output 1 
-1
0
1*/

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
		ld x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		ld k=(y1/x1);
		ld l=(y2/x2);
		if(k<l)
			cout<<-1<<endl;
		else if(k>l)
			cout<<1<<endl;
		else 
			cout<<0<<endl;
	}
}