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

void pre_order(node* root) {
	if(root == NULL)
		return;

	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);

}

int main() {

	node* root = NULL;

	root = build(root);
	cout<<"the trees are: ";
	pre_order(root);
	cout<<"\n";

	return 0;
}