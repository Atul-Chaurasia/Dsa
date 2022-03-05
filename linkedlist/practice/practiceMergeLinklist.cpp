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

void insertAtTail(node* &head, int value)
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

node* mergeLinkList(node* &head1, node* &head2)
{
	node* ptr1 = head1;
	node* ptr2 = head2;
	node* dummyNode = new node(-1);
	node* ptr3 = dummyNode;
	
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1->data < ptr2->data){
			ptr3->next = ptr1;
			ptr1 = ptr1->next;
		}
		else{
			ptr3->next = ptr2;
			ptr2 = ptr2->next;
		}
		ptr3 = ptr3->next;
	}
	while(ptr1!=NULL){
		ptr3->next = ptr1;
		ptr1 = ptr1->next;
		ptr3 = ptr3->next;
	}
	while(ptr2!=NULL){
		ptr3->next = ptr2;
		ptr2 = ptr2->next;
		ptr3 = ptr3->next;
	}
	return dummyNode->next;	
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{
	node* head1 = NULL;
	node* head2 = NULL;
	
	int arr1[] = {1,2,3,4};
	int arr2[] = {5,6,7};
	for(int i=0; i<4; i++){
		insertAtTail(head1, arr1[i]);
	}
	for(int i=0; i<3; i++){
		insertAtTail(head2, arr2[i]);
	}
	display(head1);
	display(head2);
	
	node* newnode = mergeLinkList(head1, head2);
	display(newnode);
	

	return 0;
}

