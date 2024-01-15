#include <iostream>
using namespace std;

class node {

public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

node* build(node* root) {

	int data;
	cin>>data;

	if(data == -1)
		return NULL;

	root = new node(data);

	root->left = build(root->left);
	root->right = build(root->right);

	return root;
}

node* search_in_BST(node* root, int data) {
	// empty tree
	if(root == NULL)
		return NULL;

	// equal to root value
	if(root->data == data)
		return root;

	// greater root value
	if(root->data > data)
		return search_in_BST(root->left, data);

	// lesser root value
	return search_in_BST(root->right, data);
}

int main() {

	node* root = NULL;

	root = build(root);

	int data;
	cout<<"enter the data you want to search in a BST: ";
	cin>>data;

	cout<<"address of the "<<data<<" is "<<search_in_BST(root, data)<<"\n";
	// cout<<search_in_BST(root, data)<<"\n";


	return 0;
}