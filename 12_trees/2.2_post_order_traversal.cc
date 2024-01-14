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

	root = new node(data);

	if(data == -1)
		return NULL;

	root->left = build(root->left);
	root->right = build(root->right);

	return root;
}

void post_order(node* root) {
	if(root == NULL)
		return;

	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
}

int main() {

	node* root = NULL;

	root = build(root);

	cout<<"the trees are: ";
	post_order(root);
	cout<<"\n";

	return 0;
}