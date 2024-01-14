#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = left;
		this->right = right;
	}
};

node* build(node* root) {

	int data;
	cin>>data;

	root = new node(data);

	if(data == -1)
		return NULL;

	root->left = build(root->left);
	root->right = build(root->right);

	return root;
}

void in_order(node* root) {

	if(root == NULL)
		return;

	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);
}


int main() {

	node* root = NULL;

	root = build(root);

	cout<<"the trees are ";
	in_order(root);
	cout<<"\n";

	return 0;
}