/*Chef started watching a movie that runs for a total of X minutes.

Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that Y is even.
Constraints
1≤X,Y≤1000
Y is an even integer.
Subtasks
Subtask #1 (100 points): original constraints

Sample Input 1 
100 20
Sample Output 1 
90*/

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
	int x,y;
	cin>>x>>y;
	cout<<(x-y)+(y/2)<<endl;
}