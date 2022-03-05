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

Node* insertBst(Node* root, int val)
{
	if(root == NULL){
		return new Node(val);
	}
	if(val < root->data){
		root->left = insertBst(root->left, val);
	}
	else{
//		val > root->data
		root->right = insertBst(root->right, val);
	}
	return root;
}
void inorder(Node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	Node* root = NULL;
	root = insertBst(root, 5);
	root = insertBst(root, 1);
	root = insertBst(root, 3);
	root = insertBst(root, 4);
	root = insertBst(root, 2);
	root = insertBst(root, 7);
	
//	print inorder
	inorder(root);
	return 0;
}

