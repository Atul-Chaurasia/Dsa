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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertAtLast(node* &head, int value)
{
	node* n = new node(value);
	
	if(head == NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insertAtHead(node* &head, int value)
{
	node* n = new node(value);
	n->next = head;
	head = n;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool searchElement(node* &head, int key)
{
	node* temp = head;
	while(temp!=NULL){
		if(temp->data == key){
			return true;
		}
		temp = temp -> next;
	}
	return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void display(node* head)
{
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{
	node* head = NULL;
	insertAtLast(head,1);
	insertAtLast(head,2);
	insertAtLast(head,3);
	display(head);
	insertAtHead(head,4);
	display(head);
	cout<<searchElement(head,4)<<endl;
	display(head);
	
	return 0;
}

