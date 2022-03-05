#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;
	node(int value){
		data = value;
		next = NULL;
	}
};

void insertAtLast1(node* &head, int value)
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
	temp->next=n;
}

void insertAtHead(node* &head, int value)
{
	node* n = new node(value);
	n->next=head;
	head = n;
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

bool search(node* &head, int key)
{
	node* temp = head;
	while(temp!=NULL){
		if(temp->data == key){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int main()
{
	node* head = NULL;
	
	insertAtLast1(head, 1);
	insertAtLast1(head, 2);
	insertAtLast1(head, 3);
	insertAtHead(head,4);
	insertAtLast1(head, 5);
	display(head);
	cout<<search(head,7);
	return 0;
}

