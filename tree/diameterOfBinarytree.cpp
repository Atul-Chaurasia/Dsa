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

int calHeight(Node* root){
	if(root == NULL){
		return 0;
	}
	int lh = calHeight(root->left);
	int rh = calHeight(root->right);
	return max(lh, rh)+1;
}

int diameterOfBinaryTree(Node* root){
	if(root == NULL){
		return 0;
	}
	int lheight = calHeight(root->left);
	int rheight = calHeight(root->right);
	int currentDiameter = (lheight + rheight)+1;
	
	int lDiameter = diameterOfBinaryTree(root->left);
	int rDiameter = diameterOfBinaryTree(root->right);
	
	return max(currentDiameter, max(lDiameter, rDiameter));
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
	
	cout<<diameterOfBinaryTree(root)<<" ";
	
	return 0;
}

