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

// node* push(node* &head, int data){
// 	node* temp = new node(data);
// 	temp->next = head;
// 	head = temp;
// 	return head;
// }

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

	temp->next = newNode->next;
	temp->next = newNode;

	return head;

}

node* reverseLinkedList(node* &head){

    if(head == NULL || head->next == NULL)
    	return head;

	node* prev = NULL;
	node* curr = head;

	while(curr != NULL){
		node* forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	head = prev;

	return head;
}

void input(node* &head, int position, int data, int size){
	for(int i=1; i<=size; i++){
		cin>>position>>data;
		insertion(head, position, data);
	}
}

void print(node* &head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){

	node* n1 = new node(1);
	node* head = n1;

	int n, data, position;
	cout<<"enter number of elements: ";
	cin>>n;

	cout<<"enter data and its positions: ";

	input(head, position, data, n);
	// print(head);
	// insertion(head, 1, 1);
	// insertion(head, 2, 2);
	// insertion(head, 3, 3);
	// push(head,5);
	// push(head,3);
	// push(head,97);
	// push(head,19);
	print(head);
	cout<<"after reversing the list"<<endl;
	reverseLinkedList(head);
	print(head);


	return 0;
}