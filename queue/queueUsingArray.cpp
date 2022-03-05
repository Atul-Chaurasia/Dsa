// Queue implementation using linklist
#include<iostream>
#define n 10
using namespace std;

class queue{
	int* arr;
	int front;
	int back;
	
	public:
		queue(){
			arr = new int[n];
			front = -1;
			back = -1;
		}
		
		void push(int x){
			if(back == n-1){
				cout<<"Queue is overflow"<<endl;
				return;
			}
			back++;
			arr[back] = x;
			
			if(front==-1){
				front++;
			}
		}
		void pop(){
			if(front==-1 || front>back){
				cout<<"No element in queue"<<endl;
				return;
			}
			front++;
		}
		int peek(){
			if(front==-1 || front>back){
				cout<<"No element in peek"<<endl;
				return -1;
			}
			return arr[front];
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
	cout<<q.isEmpty()<<endl;
	
	return 0;
}
