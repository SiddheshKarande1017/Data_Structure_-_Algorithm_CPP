#include <iostream>

using namespace std;

int main() {
	int arrsiz;
	cin>>arrsiz;
	int data[arrsiz];
	for(int k=0;k<arrsiz;k++){
		cin>>data[k];
	}
	int i,j,pop;
	//considering 0th element as a sorted.  
	for(i=1;i<=arrsiz-1;i++){
		//extract the element 
		pop=data[i];
		j=i;
		while(data[j-1]>pop && j>=1){
			/*if current element data[j-1] > data[i]
      move sorted element to the right by 1*/
			data[j]=data[j-1];
			j--;
		}
		data[j]=pop;
	}
	for(int y=0;y<arrsiz;y++){
		cout<<data[y]<<" ";
	}	
	}
