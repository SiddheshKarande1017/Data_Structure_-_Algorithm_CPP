/*Chef is a great mechanic. As the cost of petrol is increasing day by day he decided to build a water car to take his girlfriend Natasha on a date. Water car has great build quality but is able to travel only 1 Km on every 1 liter of water. To show off his water car to Natasha he took her to the formula racing track which is an (N−1) km long road with checkpoints numbered 1 to N from left to right. The distance between two adjacent checkpoints is 1 Km.

Initially, Chef is at checkpoint number 1 and the tank of the water car is empty. At every checkpoint, there is a water station, but the cost of filling 1 liter of water at a checkpoint is equal to the checkpoint number. Chef can not store more than V liters of water in the tank of a car. Chef is interested in both minimum as well as the maximum cost of filling that can happen to reach the checkpoint number N.

You shouldn't have any water left after reaching Nth checkpoint. Also, you are not allowed to pour out water.*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
 	cin.tie(NULL);
	int tst;
	cin>>tst;
	while(tst--){
		ll NO,VO;
		cin>>NO>>VO;
		ll m_price=0, mi_price=0;
		m_price=((NO-1)*NO)/2; //1+2+3+4+5+6+...+(n-1)=n(n-1)/2
		if(VO==1){
			mi_price=m_price;
		}
		else{
			if(VO>=NO-1){
				mi_price=NO-1; //if volume is greater than checkpoints then tank would be filled only at frst point
			}
			else{
				mi_price+=VO+((NO-VO)*(NO-VO+1))/2-1;// min+volume+[2+3+4+...+(n-v)]

			}
		}
		cout<<m_price<<" "<<mi_price<<endl;

	}
}