// there are 3 types of tree traversal
//1.preorder	(root, left, right)
//2.Inorder		(left, root, right)
//3.Postorder	(left, right, root)

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

void preOrderTraversal(struct Node* root){
	if(root == NULL){
		return;
	}	
	cout<<root->data<<" ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void inOrderTraversal(struct Node* root){
	if(root == NULL){
		return;
	}
	inOrderTraversal(root->left);
	cout<<root->data<<" ";
	inOrderTraversal(root->right);
}

void postOrderTraversal(struct Node* root){
	if(root == NULL){
		return;
	}
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<root->data<<" ";
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
		
	preOrderTraversal(root);
	cout<<endl;
	inOrderTraversal(root);
	cout<<endl;
	postOrderTraversal(root);
	
	return 0;
}

