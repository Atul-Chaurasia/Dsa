#include<iostream>
#include<queue>
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

void levelOrderTraversal(Node* root){
	if(root == NULL){
		return;
	}
	queue<Node*> q;
	
	int level=0;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node != NULL){
			cout<<node->data<<" ";
		
			if(node->left)
				q.push(node->left);
			if(node->right)
				q.push(node->right);
		}
		else if(!q.empty()){
			q.push(NULL);
			level++;
		}
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
	
	levelOrderTraversal(root);
	return 0;
}

