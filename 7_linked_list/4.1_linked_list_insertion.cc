#include <bits/stdc++.h>
using namespace std;

class node{
public://remember to declare 
	int data;//data value
	node* next;//pointer that store next data value

	//constructor
	node(int data){
		this->data = data;//given value put in data

		this->next = NULL;//initially pointing null
	}
};

// function for inserting data in list at any position
node* insertion(node* &head, int position, int data){
	// creating new node
	node* newNode = new node(data);

	// insertion at head
	if(position == 1){
		newNode->next = head;
		head = newNode;
		return head;
	}

	// current position index
	int pos = 2;

	// temporary pointer to the head node
	node* temp = head;


	// this while loop is set head to before the given position
	// mean intput position is 6
	// then it set head to 5th position
	while(pos < position){
		pos++;
		temp = temp->next;
	}

	// now temp is pointing to the previos node
	// of the node to be inserted


	// next pointer of the inserted node to the next node
	// to be inserted
	newNode->next = temp->next;


	// next pointer of the temp node to the node
	// to be inserted
	temp->next = newNode; 

	return head;

}

void print(node* head){
	node* temp = head;

	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main(){
	node* n1 = new node(78);

	node* head = n1;
	insertion(head, 2, 56);
	insertion(head, 3, 4);



	// insertion at start
	insertion(head, 1, 19);

	//insertion anywhere in list
	insertion(head, 2, 47);

	//insertion at last
	insertion(head, 6, 99);

	print(head);
	return 0;
}
