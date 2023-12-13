#include <iostream>
using namespace std;

class Node {
	
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
	// Node n;
	return 0;
}
