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

int heightOfBinaryTree(Node* root){
	if(root == NULL){
		return 0;
	}
	int lheight = heightOfBinaryTree(root->left);
	int rheight = heightOfBinaryTree(root->right);
	return max(lheight, rheight)+1;
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
//	root->left->left->left = new Node(8);

	cout<<heightOfBinaryTree(root)<<" ";
	return 0;
}
