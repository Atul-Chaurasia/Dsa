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
	if(head==NULL){
		n->next = n;
		head = n;
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
	if(head==NULL){
		insertAtHead(head, value);
		return;
	}
	node* n = new node(value);
	node* temp = head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next = n;
	n->next = head;
}

void deleteFromHead(node* &head)
{
	node* temp = head;
	while(temp->next!=head){
		temp=temp->next;
	}
	node* toDelete = head;
	temp->next = temp->next->next;	//we can also write (head->next) in place of (temp->next->next).
	head = head->next;
	
	delete toDelete;
}

void deleteFromTail(node* &head, int position)
{
	if(position == 1){
		deleteFromHead(head);
		return;
	}
	int count=1;
	node* temp = head;
	while(count!=position){
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

int main()
{
	node* head = NULL;
	
	int arr[] = {1,2,3,4,5};
	for(int i=0; i<5; i++){
		insertAtHead(head, arr[i]);
	}
	display(head);
	deleteFromTail(head,1);
	display(head);
	deleteFromHead(head);
	display(head);
	
	return 0;
}

