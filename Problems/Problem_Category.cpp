/*Chef prepared a problem. The admin has rated this problem for x points.

A problem is called :

1) Easy if 1≤x<100

2) Medium if 100≤x<200

3) Hard if 200≤x≤300

Find the category to which Chef’s problem belongs.*/


#include <bits/stdc++.h>
using namespace std;
int main(){
	int tstcase;
	cin>>tstcase;
	while(tstcase--){
		int xml;
		cin>>xml;
		if(1<=xml && xml<100)
			cout<<"Easy"<<endl;
		else if(100<=xml && xml<200)
		cout<<"Medium"<<endl;
		else if(200<=xml && xml<=300)
		cout<<"Hard"<<endl;
	}
}