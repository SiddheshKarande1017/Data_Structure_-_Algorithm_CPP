#include<bits/stdc++.h>
#define ll  long long  int
using namespace std;

int main(){
 // int arr[]={3,6,4,6,2,9};
 // for(int i=0;i<6-1;i++){                  //3 6 4 6 2 9
 // 	for(int j=0;j<6-1-i;j++){
 // 		if(arr[j]>arr[j+1]){
 // 			int temp=arr[j];
 // 			arr[j]=arr[j+1];
 // 			arr[j+1]=temp;
 // 		}

 // }}
 // for(int i=0;i<6;i++){
 // 	cout<<arr[i]<<" ";
 // }

//3 5 10 15 20 
//for i=0
//as array is sorted we will not swap any element
//but ten too we check for each time 

//optimised way
int arr[]={3,6,4,6,2,9};
 for(int i=0;i<6-1;i++){                  //3 6 4 6 2 9
 	bool swaped=false;
 	for(int j=0;j<6-1-i;j++){
 		if(arr[j]>arr[j+1]){
 			int temp=arr[j];
 			arr[j]=arr[j+1];
 			arr[j+1]=temp;
 			swaped=true;
 		}

 }       if(swaped==false)
 			break;
}
 for(int i=0;i<6;i++){
 	cout<<arr[i]<<" ";
 }
}