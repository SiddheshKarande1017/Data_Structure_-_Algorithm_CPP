#include <bits/stdc++.h>
using namespace std;
class stack
{
private:
	int top;
	int arr[5];
public:
	stack(){
		top=-1;
		for(int i=0;i<5;i++)
			arr[i]=0;
	}
	bool isEmpty() {
    if (top == -1)
      return true;
    else
      return false;
  }
  bool isFull() {
    if (top == 4)
      return true;
    else
      return false;
  }
	void push(int data){
		if(isFull()){
			cout<<"overflow";
		}
		else{
			top++;
			arr[top]=data;

		}
		
	}
	int pop(){
	if (isEmpty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      int popValue = arr[top];
      arr[top] = 0;
      top--;
      return popValue;
    }
	}
	int count(){
		return (top+1);
	}
	int peek(int pos){
		if(isEmpty()){
			cout<<"underflow"<<endl;
			return 0;
		}
		else{
			return arr[pos];
		}
	}
	void change(int i,int val){
		if(i<0 || i>top){
			cout<<0;
		}
		else{
			arr[i]=val;
			cout << "value changed at location " << pos << endl;
		}
	}
	void display(){
		for(int i=4;i>0;i--){
			cout<<arr[i]<<endl;
		}
	}


};
int main(){
	stack s;
	/*write your code here*/
}