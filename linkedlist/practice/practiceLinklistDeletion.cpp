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

void deleteFromHead(node* &head)
{
	node* toDelete = head;
	head = head -> next;
	delete toDelete;
}

void deleteFromTail(node* &head, int value)
{
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		deleteFromHead(head);
		return;
	}
		
	node* temp = head;
	while(temp->next->data != value){
		temp = temp->next;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	
	delete toDelete;
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

void insertAtHead(node* &head, int value){
	node* n = new node(value);
	n->next = head;
	head = n;
}

void insertAtLast(node* &head, int value){
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

int main()
{	
	node* head = NULL;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtLast(head,2);
	insertAtLast(head,1);
	display(head);
	deleteFromHead(head);
//	display(head);
	deleteFromTail(head,1);
	display(head);
	return 0;
}

