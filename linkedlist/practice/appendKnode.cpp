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

void insertAtTail(node* &head, int value){
	node* n = new node(value);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next=n;
}

int length(node* &head)
{
	node* temp = head;
	int l=0;
	while(temp!=NULL){
		l++;
		temp = temp->next;
	}
	return l;
}

node* kAppend(node* &head, int k)
{
	node* newTail;
	node* newHead;
	node* tail = head;
	
	int l = length(head);
	int count = 1;
	
	while(tail->next!=NULL){
		if(count == l-k){
			newTail = tail;
		}
		if(count == l-k+1){
			newHead = tail;
		}
		tail = tail->next;
		count++;
	}
	newTail->next=NULL;
	tail->next = head;
	
	return newHead;
}

void display(node* head)
{
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{	
	node* head = NULL;
	int array[] = {1,2,3,4,5,6};
	for(int i=0; i<6; i++){
		insertAtTail(head, array[i]);
	}
	display(head);
	node* newHead = kAppend(head, 3);
	display(newHead);
	
	return 0;
}

