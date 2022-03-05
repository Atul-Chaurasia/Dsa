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

void insertAtLast(node* &head, int value)
{
	node* n = new node(value);
	if(head == NULL){
		head = n;
		return;
	}
	
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	} 
	temp->next = n;
}

void insertAtTop(node* &head, int value)
{
	node* n = new node(value);
	n->next=head;
	head = n;
}

void evenAfterOdd(node* &head)
{
	node* odd = head;
	node* even = head->next;
	node* evenStart = even;
	
	while(odd->next!=NULL && even->next!=NULL){
		odd->next = even->next;
		odd = odd->next;
		
		even->next = odd->next;
		even = even->next;
	}
	
	odd->next = evenStart;
	if(odd->next!=NULL){
		even->next=NULL;
	}
}
void display(node* head)
{
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}cout<<"NULL"<<endl;
}

int main()
{
	node* head = NULL;
	
	int arr[] = {6,5,4,3,2,1};
	for(int i=0; i<6; i++){
		insertAtLast(head, arr[i]);
	}
	display(head);
	evenAfterOdd(head);
	display(head);
	
	return 0;
}

