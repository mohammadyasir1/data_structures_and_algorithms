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


//insertion between list
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
}


//deletion between list
node* deletion(node* &head, int position){

	// deletion of head
	if(position == 1){
		// shifting head to the next node and return head
		head = head->next;
		return head;
	}

	// temporary pointer to the head node
	node* temp = head;


	// current position index
	int pos = 2;

	while(pos < position){
		pos++;
		temp = temp->next;
	}
	// now temp is pointing to the previos node
	// of the deleted node



	// storing the address of the next node of the
	// deleted node in the next pointer
	node* nextptr = temp->next->next;


	// deleting the memory of the deleted node
	free(temp->next);


	// pointing to the previos node to the next node
	// of the deleted node
	temp->next = nextptr;



	return head;
}

void print(node* &head){
	node* temp = head;
	while(temp != NULL){
		cout<< temp->data <<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	node* n1 = new node(1);
	node* head = n1;
	// print(head);
	// insertion at start
	insertion(head, 2, 99);
	insertion(head, 3, 19);
	insertion(head, 4, 47);
	insertion(head, 5, 33);
	
	print(head);


	// deletion at start
	deletion(head, 1);

	// deletion between list
	deletion(head, 3);


	// deletion at end
	deletion(head, 3);


	print(head);

	return 0;
}