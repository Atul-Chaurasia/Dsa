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
void insertAtHead(node* &head, int value)
{
	node* n = new node(value);
	
	if(head == NULL){
		n->next=n;
		head=n;
		return;
	}
	node* temp = head;
	
	while(temp->next!=head){
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}
void insertAtLast(node* &head, int value)
{
	if(head == NULL){
		insertAtHead(head, value);
		return;
	}
	node* n = new node(value);
	node* temp = head;
	
	while(temp->next!=head){
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
}

void deleteAtFirst(node* &head)
{
	node* temp = head;
	while(temp->next!=head){
		temp = temp->next;
	}
	node* toDelete = head;
	temp->next = head->next;
	head = head->next;
	
	delete toDelete;
}
void deleteAtLast(node* &head, int position)
{
	if(position == 1){
		deleteAtFirst(head);
	}
	node* temp = head;
	int count = 1;
	while(count != position-1){
		temp = temp->next;
		count++;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	
	delete toDelete;
}

void display(node* head)
{
	node* temp = head;
	do{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp!=head);
	cout<<endl;
}

bool searching(node* &head, int k)
{
	node* temp = head;
	do{
		if(temp->data == k){
			return true;
		}
		temp = temp->next;
	}while(temp!=head);
	cout<<endl;
}

int main()
{
	node* head = NULL;
	
	insertAtLast(head, 1);
	insertAtLast(head, 2);
	insertAtLast(head, 3);
	display(head);
	insertAtHead(head, 4);
	display(head);
	deleteAtLast(head,4);
	display(head);
	deleteAtFirst(head);
	display(head);
	cout<<searching(head,2);
	return 0;
}

