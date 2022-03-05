#include<iostream>
#include<math.h>
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
int height(Node* root){
	if(root == NULL){
		return 0;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh, rh)+1;
}

bool balancedBinaryTree(Node* root){
	if(root == NULL){
		return true;
	}
	if(balancedBinaryTree(root->left) == false){
		return false;
	}
	if(balancedBinaryTree(root->right) == false){
		return false;
	}
	
	int lh = height(root->left);
	int rh = height(root->right);
	if(abs(lh - rh) <= 1){
		return true;
	}
	else{
		return false;
	}
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
//	root->left->left->left->left = new Node(9);
	
	if(balancedBinaryTree(root)){
		cout<<"Balanced Tree";
	}
	else{
		cout<<"Unbalanced Tree";
	}
	
	return 0;
}
