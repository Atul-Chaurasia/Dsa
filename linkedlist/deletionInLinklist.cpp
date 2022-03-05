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
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void deleteAtFirst(node* &head)
{
	node* toDelete = head;
	head = head -> next;
	delete toDelete;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void deleteNelement(node* &head, int value)
{
	if(head==NULL){		// if there is no node in link list
		return;
	}
	
	if(head->next==NULL){	// if there is only a single node in link list 
		deleteAtFirst(head);
		return;
	}
	
	node* temp = head;			// if we want to delete any particular node
	while(temp->next->data != value){
		temp = temp -> next;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	
	delete toDelete;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void display(node* head)
{
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

void insertAtHead(node* &head, int value)
{
	node* n = new node(value);
	n->next = head;
	head = n;
}

void insertAtLast(node* &head, int value)
{
	node* n = new node(value);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

int main()
{
	node* head = NULL;
	
	insertAtHead(head,1);
	insertAtHead(head,2);
	insertAtHead(head,3);
	insertAtLast(head,4);
	insertAtLast(head,5);
	insertAtLast(head,6);
	display(head);
//	deleteNelement(head,1);
	deleteAtFirst(head);
	display(head);
	deleteNelement(head,5);
	deleteNelement(head,6);
	display(head);
	
	return 0;
}

