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
		temp  = temp->next;
	}
	temp->next = n;
}

node* mergeLinklist(node* &head1, node* &head2)
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
	while(ptr1 != NULL){
		ptr3->next = ptr1;
		ptr1 = ptr1->next;
		ptr3 = ptr3->next;
	}
	while(ptr2 != NULL){
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
	
	int arr1[] = {1,4,5,7};
	int arr2[] = {2,3,6};
	for(int i=0; i<4; i++){
		insertAtLast(head1, arr1[i]);
	}
	for(int i=0; i<3; i++){
		insertAtLast(head2, arr2[i]);
	}
	display(head1);
	display(head2);
	
	node* newnode = mergeLinklist(head1, head2);
	display(newnode);
	
	return 0;
}

