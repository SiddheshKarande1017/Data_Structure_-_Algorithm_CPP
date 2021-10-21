
//Median of two sorted arrays of different sizes
#include <bits/stdc++.h>
using namespace std;
class sol{
private:
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
public:
	sol(vector<int> v1,vector<int> v2){
		this->v1=v1;
		this->v2=v2;
	}
	vector<int> sort(){
		int i=0;
		int j=0;
		for(;i<v1.size() && j<v2.size();){
			if(v1[i]<v2[j]){
				v3.push_back(v1[i]);i++;

			}
			else if(v1[i]>=v2[j]){
				v3.push_back(v2[j]);j++;
			}

		}
		if(i<v1.size()){
			while(i<v1.size()){
				v3.push_back(v1[i]);
				i++;
			}
		}
		else if(j<v2.size()){
			while(j<v2.size()){
				v3.push_back(v2[j]);
				j++;
			}
		}
	// 	for(int i=0;i<v3.size();i++){
	// 	cout<<v3[i]<<" ";
	// }
		return v3;
	}
	float median(){
		vector<int> ans=sort();
		float final;
		int k=ans.size();
		// cout<<k<<endl;
		if(k%2==0){
			int d=ans[(k/2)-1]+ans[k/2];
			final=d/2;
			// cout<<d<<" "<<ans[(k/2)-1]<<" "<<ans[k/2]<<" ";
		}
		else{
			 final=ans[k/2];
			
		}
		return final;
	}
};

int main(){
	vector<int> v1={2, 3, 5, 8};
	vector<int> v2={10, 12, 14, 16, 18, 20};
	// vector<int> v1={-5, 3, 6, 12, 15};
	// vector<int> v2={-12, -10, -6, -3, 4, 10};
	
	
	sol s(v1,v2);
	cout<<"The median is "<<s.median();


}
