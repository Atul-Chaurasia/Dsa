#include<iostream>
#define n 10
using namespace std;

class queue{
	int* array;
	int front;
	int back;
	public:
		queue(){
			array = new int[n];
			front = -1;
			back = -1;
		}
		void push(int x){
			if(back == n-1){
				cout<<"Queue is overflow"<<endl;
				return;
			}
			back++;
			array[back] = x;
			
			if(front == -1){
				front++;
			}
		}
		void pop(){
			if(front == -1 || front>back){
				cout<<"No element in Queue"<<endl;
				return;
			}
			front++;
		}
		int peek(){
			if(front == -1 || front>back){
				cout<<"No element in peek"<<endl;
				return -1;
			}
			return array[front];
		}
		bool isEmpty(){
			if(front==-1 || front>back){
				return true;
			}
			return false;
		}
};
int main()
{
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	return 0;
}

