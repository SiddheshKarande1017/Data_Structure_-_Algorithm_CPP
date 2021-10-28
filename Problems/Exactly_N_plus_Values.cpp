/*You are given a positive integer N. You have to print exactly N+1 positive integers satisfying the following conditions:

Exactly one value should appear twice, all the remaining values should appear only once.
Sum of all these values should be equal to 2N.
You have to print the values in non-decreasing order. If there are multiple solutions, you can print any of them.*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	
	short int t;
	cin>>t;
	while(t--){
		short int No;
		cin>>No;
		long long int sum=0,sum_ofall=pow(2,No);
		if(No==1){
			cout<<"1"<<" "<<"1"<<endl;
		}
		else{
			for(int i=1;i<=No-1;i++){
				cout<<i<<" ";
				sum=sum+i;
				if(i==No-1){
				    cout<<i<<" ";
				    sum=sum+i;
				}
			}
		
		cout<<(sum_ofall-sum)<<endl;
		}
	}
	return 0;
}