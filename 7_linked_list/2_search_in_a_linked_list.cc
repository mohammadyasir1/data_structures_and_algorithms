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

void insertAtHead(Node* &head, int d) {
	//create new node for the data and next address
	Node* temp = new Node(d);
	temp->nextPtr = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d) {
	//create new node for the data and next address
	Node* temp = new Node(d);
	tail->nextPtr = temp;
	tail = temp;
}

void print(Node* &head) {
	Node* temp = head;

	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->nextPtr;
	}
	cout<<endl;
}

int searchInLinkedList(Node* &head, int k) {

    while(head != NULL) {
        if(head->data == k)
            return 1;
        head = head->nextPtr;
        
    }
    return 0;
    
}


int main() {
	//created a new node
	Node* n1 = new Node(1);
	// cout<<"[data = "<< n1->data <<", "<<"address = "<< n1->nextPtr <<"]"<<endl;

	// head pointed to n1
	Node* head = n1;
	Node* tail = n1;

	// print(head);
	insertAtTail(tail, 2);
	// print(head);
	insertAtTail(tail, 3);


	
	insertAtTail(tail, 7);
	print(head);

	//linear search on list
	int k;
	cout<<"enter the key to search in the list: ";
	cin>>k;
	bool present = searchInLinkedList(head, k);
	// cout<<searchInLinkedList(head, k)<<endl;
	if(present)
		cout<<"present"<<endl;
	else
		cout<<"not present"<<endl;
	

	return 0;
}