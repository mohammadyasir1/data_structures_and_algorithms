#include <iostream>
#include <queue>
#include <vector>
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


// Helper function to find the
// last right node in a subtree
node* find_last_right(node* root) {
	// Traverse to the rightmost node in the subtree
	if(root->right == NULL)
		return root;
		// return the rightmost node		

	// Recursively find the last right node
	return find_last_right(root->right);
}

node* helper(node* root) {
	// If the left child of the root is null,
    // return the right child
	if(root->left == NULL) {
		return root->right;
	} else if(root->right == NULL) {
		// If the right child is null,
        // return the left child
		return root->left;
	}

	// If both left and right children exist
    // Store the right child
	node* right_child = root->right;

	// Find the last right child of the left subtree
	node* last_right = find_last_right(root->left);

	// Set the right child of the last
	// right node to the stored right child
	last_right->right = right_child;

	// Return the left child as the new subtree
	return root->left;
}

node* delete_node(node* root, int key) {
	
	// check if the root is empty
	if(root == NULL)
		return NULL;

	// If the current root node has the key to be deleted
	if(root->data == key)
		return helper(root);
		// Delete the node using the helper function

	// Create a dummy node pointing to the root
	node* dummy = root;

	// While loop to traverse the tree
	while(root != NULL) {
		// If the value to be deleted
		// is in the left subtree
		if(root->data > key) {
			// If the left child exists and
			// its value matches the key
			if(root->left != NULL && root->left->data == key) {
				// Delete the node using the helper function
				root->left = helper(root->left);
				break;
			} else {
				// If the value is not in the left
				// subtree, move to the right subtree
				if(root->right != NULL && root->right->data == key) {
					// Delete the node using the helper function
					root->right = helper(root->right);
					break;
				} else {
					// Move to the right subtree
					root = root->right;
				}
			}
		}
	}
	// Return the modified tree
	return dummy;
}


// to get input from user
// node* build(node* root) {
// 	int data;
// 	cin>>data;
	
// 	if(data == -1)
// 		return NULL;

// 	root = new node(data);

// 	root->left = build(root->left);
// 	root->right = build(root->right);

// 	return root;
// }


void in_order(node* root) {
	// Check if the current node
    // is null (base case for recursion)
	if(root == NULL) {
		// If null, return and
        // terminate the function
		return;
	}

	// Recursively call in_order
    // for the left subtree
	in_order(root->left);

	// Print the value of the current node
	cout<<root->data<<" ";

	// Recursively call in_order
    // for the right subtree
	in_order(root->right);
}

int main() {
	// Creating a sample tree for testing purposes
	node* root = new node(5);
	root->left = new node(3);
	root->right = new node(6);
	root->left->left = new node(2);
	root->left->right = new node(4);
	root->right->right = new node(7);

	// Printing the original tree
	cout << "Original Tree (Inorder Traversal): ";
	in_order(root);

	cout<<"\n";

	// Testing the deleteNode function
	int key = 3;
	node* updated_tree = delete_node(root, key);

	// Printing the tree after deletion
	cout << "Tree After Deletion (Inorder Traversal): ";
	in_order(updated_tree);
	cout<<"\n";


	return 0;
}
