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
	cin>>data;
	root = new binary_tree_node(data);

	if(data == -1)
		return NULL;

	root->left = build_tree(root->left);

	root->right = build_tree(root->right);

	return root;
}

void display(binary_tree_node* root) {
    if (root != NULL) {
        cout<<root->data_value<<" ";
        display(root->left);
        display(root->right);
    }
}


int main() {

	binary_tree_node* root = NULL;

	//creating tree
	root = build_tree(root);
	
	// displaying tree
	display(root);
	cout<<endl;


	return 0;
}
