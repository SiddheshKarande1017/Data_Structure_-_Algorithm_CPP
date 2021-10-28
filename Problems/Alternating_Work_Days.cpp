
/*Alice and Bob are two friends. Initially, the skill levels of them are zero. They work on alternative days, i.e one of Alice and Bob works on the odd-numbered days(1,3,5,…) and the other works on the even-numbered days (2,4,6,…). The skill levels of Alice and Bob increase by A,B respectively on the days they work.

Determine if it is possible that the skill levels of Alice and Bob become exactly P,Q respectively on some day.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
	int tstcase;
	cin>>tstcase;
	while(tstcase--){
		int Al,bo,p,q;
		cin>>Al>>bo>>p>>q;
		
	if(p%Al==0 && q%bo==0){
		int k=p/Al;
		int l=q/bo;
		
			if((k-l)==1 || (l-k)==1 || (k-l)==0 )
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;

}