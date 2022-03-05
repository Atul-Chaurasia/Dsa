#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node* prev;
		node(int value){
			data = value;
			next = NULL;
			prev = NULL;
		}
};

void insertAtHead(node* &head, int value)
{
	node* n = new node(value);
	n->next = head;
	if(head!=NULL){
		head->prev = n;
	}
	head = n;	
}

void insertAtLast(node* &head, int value)
{
	if(head == NULL){
		insertAtHead(head,value);
		return;
	}
	
	node* n = new node(value);
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
}

void deleteHead(node* &head)
{
	node* toDelete = head;
	head = head->next;
	head->prev=NULL;
	delete toDelete;	
}

void deleteLast(node* &head, int position)
{
	if(position == 1){
		deleteHead(head);
		return;
	}
	int count = 1;
	node* temp = head;
	while(temp!=NULL && count!=position){
		temp = temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	if(temp->next!=NULL){
		temp->next->prev = temp->prev;
	}
	delete temp;
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	node* head = NULL;
	
	insertAtHead(head, 1);
	insertAtHead(head, 2);
	insertAtLast(head, 4);
	insertAtLast(head, 3);
	display(head);
	deleteLast(head,3);
	display(head);
	deleteHead(head);
	display(head);
	
	return 0;
}

