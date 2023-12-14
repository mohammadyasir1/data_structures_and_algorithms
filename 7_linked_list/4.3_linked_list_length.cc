#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;


	node(int data){
		this->data = data;
		this->next = NULL;
	}
	
};


node* insertion(node* &head, int position, int data){
	node* newNode = new node(data);

	if(position == 1){
		newNode->next = head;
		head = newNode;
		return head;
	}

	node* temp = head;
	int pos = 2;


	while(pos < position){
		pos++;
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

}


void print(node* &head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int lengthOfLinkedList(node* &head){
	int length = 0;//set initial value to 0
	node* ptr = head;

	while(ptr != NULL){
		// incrementing the variable
		length++;

		// pointing the pointer to the next node
		ptr = ptr->next;
	}
	return length;
}

int main(){
	node* n1 = new node(1);
	node* head = n1;

	insertion(head,2,99);
	insertion(head,3,19);
	insertion(head,4,33);
	insertion(head,5,97);

	cout<<"linked lists are: ";
	print(head);
	cout<<"length of linked list: "<<lengthOfLinkedList(head)<<endl;

}