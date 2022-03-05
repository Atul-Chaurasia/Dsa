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

int allNodeInBinaryTree(Node* root){
	if(root == NULL){
		return 0;
	}
	int ln = allNodeInBinaryTree(root->left);
	int rn = allNodeInBinaryTree(root->right);
	int current = (ln + rn)+1;
	return current;
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
	
	cout<<allNodeInBinaryTree(root)<<" ";
	return 0;
}
