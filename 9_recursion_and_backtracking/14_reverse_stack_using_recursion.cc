#include <bits/stdc++.h>
using namespace std;


void insertAtLast(stack<int> &stack, int n) {
	if(stack.empty()) {
		stack.push(n);
		return;
	}

	int tmp = stack.top();

	stack.pop();

	insertAtLast(stack, n);

	stack.push(tmp);

}

void reverseStack(stack<int> &stack) {
	if(stack.empty())
		return;


	int tmp = stack.top();

	stack.pop();

	reverseStack(stack);

	insertAtLast(stack, tmp);
}

void print(stack<int> &stack) {

	if(stack.empty())
		return;

	cout<<stack.top()<<" ";
	int top = stack.top();
	stack.pop();

	print(stack);
	stack.push(top);
	
}


int main() {
	stack<int> s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	cout<<"stack before reverse"<<endl;
	print(s);
	cout<<endl;

	reverseStack(s);
	cout<<"stack operation performed"<<endl;

	cout<<"stack after reverse"<<endl;
	print(s);
	cout<<endl;

	return 0;

}