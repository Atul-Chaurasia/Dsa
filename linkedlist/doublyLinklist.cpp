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

void insertAtHead(node* &head, int value){
	node* n = new node(value);
	n->next = head;
	if(head!=NULL){
		head->prev=n;
	}
	head = n;
}

void insertNodeAtLast(node* &head, int value){
	
	if(head == NULL){
		insertAtHead(head,value);
		return;
	}
	
	node* n = new node(value);
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	
	temp->next = n;
	n->prev = temp;
}
void deleteAtHead(node* &head)
{
	node* toDelete = head;
	head = head->next;
	head->prev = NULL;
	delete toDelete;
}

void deleteNode(node* &head, int position){
	
	if(position == 1){
		deleteAtHead(head);
		return;
	}
	node* temp = head;
	int count=1;
	
	while(temp!=NULL && count!=position){
		temp = temp->next;
		count++;
	}
	
	temp->prev->next = temp->next;
	if(temp->next!=NULL)
	{
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
	
	insertNodeAtLast(head,1);
	insertNodeAtLast(head,2);
	insertNodeAtLast(head,3);
	display(head);
	insertAtHead(head,4);
	display(head);
	deleteNode(head, 1);
	
	display(head);
	deleteNode(head, 3);
//	deleteAtHead(head);
	display(head);
	
	return 0;
}

