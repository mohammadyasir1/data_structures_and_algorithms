#include <bits/stdc++.h>
using namespace std;

class Node {

public:
	
	int data; //data value
	Node* nextPtr; // pointer to the next node


	//contructor to initialize 
	Node(int dataValue = 0) {
		//give value can be put in data
		this->data = dataValue;

		//initially pointer pointing towards NULL
		this->nextPtr = NULL;
	}

};

int main() {
	Node* n1 = new Node();
	Node* n1 = new Node(19);
	cout<<"[data = "<< n1->data <<", "<<"address = "<< n1->nextPtr <<"]"<<endl;
	return 0;
}
