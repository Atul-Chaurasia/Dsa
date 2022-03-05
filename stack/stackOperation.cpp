#include<iostream>
using namespace std;

#define n 100

class stack{
	int* arr;
	int top;
	
	public:
		stack(){
		arr = new int[n];
		top = -1;
		}
	
	void push(int x)
	{
		if(top == n-1){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		arr[top]=x;
	}
	void pop(){
		if(top==-1){
			cout<<"No element to pop"<<endl;
			return;
		}
		top--;
	}
	
	int topValue(){
		if(top==-1){
			cout<<"No element in stack";
			return -1;
		}
		return arr[top];
	}
	
	bool isEmpty(){
		return top == -1;
	}
};

int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	cout<<st.topValue()<<endl;	//5
	st.pop();	//5
	st.pop();	//4
	cout<<st.topValue()<<endl;	//3
	st.pop();	//3
	st.pop();	//2
	st.pop();	//1
	st.pop();	//no element to pop
	st.pop();	//no element to pop
//	cout<<st.topValue()<<endl;
	cout<<st.isEmpty()<<endl;
	
	return 0;
}
