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

	return head;


}

int len(node* &head){
	node* ptr = head;
	int length = 0;
	while(ptr != NULL){
		length++;
		ptr = ptr->next;
	}
	return length;
}

node* findMiddle(node* &head){
	
	// if(head == NULL)
	// 	return NULL;

	int mid = len(head)/2;

	for(int i=1; i<=mid; i++){
		head = head->next;
	}

	return head;


	//two pointer approach
	// if(head == NULL)
	// 	return head;

	// if(head->next == NULL)
	// 	return head;

	// node* fast = head;
	// node* slow = head;

	// while(fast != NULL && fast->next != NULL){
	// 	fast = fast->next->next;
	// 	slow = slow->next;
	// }

	// return slow;

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
	node* n1 = new node(0);
	node* head = n1;

	int data, position, n;
	cout<<"enter the length of the list: ";
	cin>>n;
	cout<<"enter position of data and data: ";
	
	for(int i=0; i<n; i++){
		cin>>position>>data;
		insertion(head, position, data);
	}
	// insertion(head, 3, 3);
	// insertion(head, 4, 4);
	// insertion(head, 5, 5);
	// insertion(head, 6, 6);
	print(head);
	cout<<"length = "<<len(head)<<endl;
	findMiddle(head);
	print(head);

	return 0;
}
