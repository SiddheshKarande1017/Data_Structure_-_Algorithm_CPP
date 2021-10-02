#include <iostream>
using namespace std;
bool binsearch(int l, int r,int n){
	int mid=l+(r-l)/2;
	if(n==1)
		return true;
	if(l>r)
		return false;
	else if(mid*mid==n)
		return true;
	else if(mid*mid<n){
		
		return binsearch(mid+1,r,n);
	}
	else if(mid*mid>n){
		
		return binsearch(l,mid-1,n);
	}
	return false;
}

void perfect(int n){
	int l=0,r=n/2;
	
	if(binsearch(l,r,n))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
int main(){
	int number;
	cin>>number;
	perfect(number);

}
