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

void insertLast(node* &head, int value){
	node* n = new node(value);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next=n;
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

node* reverseKnode(node* &head, int k){
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;
	
	int count = 0;
	while(currptr!=NULL && count<k){
		nextptr = currptr->next;
		currptr->next = prevptr;
		
		prevptr = currptr;
		currptr = nextptr;
		count++;
	}
	if(nextptr!=NULL){
		head->next = reverseKnode(nextptr, k);
	}
	return prevptr;
}

int main()
{
	node* head = NULL;
	insertLast(head, 1);
	insertLast(head, 2);
	insertLast(head, 3);
	insertLast(head, 4);
	insertLast(head, 5);
	insertLast(head, 6);
	display(head);
	
	int k=2;
	node* newhead = reverseKnode(head,k);
	display(newhead);
	
	return 0;
}

