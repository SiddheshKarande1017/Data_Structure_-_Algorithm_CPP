/*After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defence techniques.

The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60.

Given the ages of N women in his village, please help San Te find out how many of them are eligible for the special training.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N, the number of women.
The second line of each test case contains N space-separated integers A1,A2,...,AN, the ages of the women.
Output Format
For each test case, output in a single line the number of women eligible for self-defence training.

Constraints
1≤T≤20
1≤N≤100
1≤Ai≤100
Sample Input 1 
3
3
15 23 65
3
15 62 16
2
35 9
Sample Output 1 
2
2
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
	string str;
	cin>>str;
	int l,r;
	cin>>l>>r;
	vector<int> vec{27,0};
	for(int i=l;i<=r;i++){
		vec[str[i]-'a']++;
	}
	bool even=true;int k;
	if((r-l)%2) {even=false; k=1; }
	bool ans=true;
	for(int i=0;i<27;i++){
		if(vec[i]%2 && ((l-r)%2))
			k--;
		if(vec[i]%2 && ((l-r)%2)==0 ){
			ans=false;
			break;
		}
		if(k<0){
			ans=false;
			break;
		}
	}
	if(ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}