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

void insertAtTail(node* &head, int value)
{
	node* n = new node(value);
	if(head == NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
}

int length(node* &head){	//to calculate the length of linklist
	int l=0;
	node* temp = head;
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
//	k=k%l;
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
	newTail->next = NULL;
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
	int arr[] = {1,2,3,4,5,6};
	for(int i=0; i<6; i++){
		insertAtTail(head, arr[i]);	
	}
	display(head);
	node* newhead = kAppend(head, 3);
	display(newhead);
	
	return 0;
}

