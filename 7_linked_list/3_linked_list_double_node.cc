#include <bits/stdc++.h>
using namespace std;


class doublyNode{
public:
	int data;//data value
	doublyNode* nextPtr;//pointer to the next node value
	doublyNode* prevPtr;//pointer to the previous node value


	// constructor
	doublyNode(int dataValue = 0){
		//given value can be put in data
		this->data = dataValue;
		
		// initially pointer pointing towards null
		this->nextPtr = NULL;

		// initially pointer pointing towards null
		this->prevPtr = NULL;

	}


};

int main(){
	doublyNode* d1 = new doublyNode(1);
	cout<< d1->data <<endl;

	cout<< d1->nextPtr <<endl;

	cout<< d1->prevPtr <<endl;

	return 0;
}