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
		this->right = NULL;
		this->left = NULL;
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

vector<vector<int>> level_order(node* root) {


	vector<vector<int>> ans;

	// empty tree
	if(root == NULL)
		return ans;

	// using queue DS
	queue<node*> q;

	q.push(root);

	while(!q.empty()) {

		// size determines the current level
		int size = q.size();

		// current level vector
		vector<int> level;

		for(int i=0; i<size; i++) {

			node* n = q.front();

			q.pop();

			// pushing left child
			if(n->left != NULL)
				q.push(n->left);

			// pushing right child
			if(n->right != NULL)
				q.push(n->right);

			level.push_back(n->data);
		}

		ans.push_back(level);
	}
	return ans;
}

int main() {

	node* root = NULL;
	root = build(root);

	vector<vector<int>> v = level_order(root);

	cout<<"Level orders are \n";
	for(int i=0; i< v.size(); i++) { 
		cout<<"[";
        for(int j=0; j<v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<"]";
        cout<<"\n"; 
    } 

	return 0;
}