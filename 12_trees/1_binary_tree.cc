#include <iostream>
using namespace std;

class binary_tree_node {

public:
	// members
	// data value
	int data_value;

	// ptr to the left childe
	binary_tree_node* left;

	// ptr to the right child
	binary_tree_node* right;

	// constructor
	binary_tree_node(int data) {

		this->data_value = data;
		this->left = NULL;
		this->right = NULL;
	}
};


binary_tree_node* build_tree(binary_tree_node* root) {
	int data;
	cout<<"Enter the data: ";
	cin>>data;
	root = new binary_tree_node(data);

	if(data == -1)
		return NULL;

	cout<<"Enter data for left node: ";
	root->left = build_tree(root->left);

	cout<<"Enter data for right node: ";
	root->right = build_tree(root->right);

	return root;
}


int main() {

	binary_tree_node* root = NULL;
	root = build_tree(root);
	return 0;
}
