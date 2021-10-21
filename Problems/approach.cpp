#include <iostream>
using namespace std;
bool perfect(int num){
	int i = 1;
        while (num > 0) {
            num -= i;
            i += 2;
        }
        return num == 0;
    }

int main(){
 	int num;
 	cin>>num;
 	bool k=perfect(num);
 	if(k)
 		cout<<"True"<<endl;
 	else
 		cout<<"False"<<endl;
	
  }