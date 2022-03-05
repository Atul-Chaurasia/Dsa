#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int value){
			data = value;
			next = NULL;
		}
};

class queue{
	node* front;
	node* back;
	public:
		queue(){
			front = NULL;
			back = NULL;
		}
		void enqueue(int x){
			node* n = new node(x);
			if(front == NULL){
				back = n;
				front = n;
				return;
			}
			back->next = n;
			back = n;
		}
		
		void dequeue(){
			if(front == NULL){
				cout<<"No element to dequeue"<<endl;
				return;
			}
			node* toDelete = front;
			front = front->next;
			delete toDelete;
		}
		
		int atTop(){
			if(front == NULL){
				cout<<"No element at top ";
				return -1;
			}
			return front->data;
		}
		
		bool isEmpty(){
			if(front == NULL){
				return true;
			}
			return false;
		}
};
int main()
{
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<q.atTop()<<endl;
	q.dequeue();
	cout<<q.atTop()<<endl;
	q.dequeue();
	cout<<q.atTop()<<endl;
	q.dequeue();
	cout<<q.atTop()<<endl;
	q.dequeue();
	
	return 0;
}
