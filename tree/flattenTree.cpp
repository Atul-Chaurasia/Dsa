#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

void flattenTree(Node* root){
	if(root == NULL || (root->left == NULL && root->right == NULL)){
		return;
	}
	
	if(root->left != NULL){
		flattenTree(root->left);
		
		Node* temp = root->right;
		root->right = root->left;
		root->left = NULL;
		
		Node* rTail = root->right;
		while(rTail->right != NULL){
			rTail = rTail->right;
		}
		
		rTail->right = temp;
	}
	flattenTree(root->right);
	
	
}
void inOrder(Node* root){
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left->left = new Node(8);
	
	flattenTree(root);
	inOrder(root);
	cout<<endl;
	
	return 0;
}

