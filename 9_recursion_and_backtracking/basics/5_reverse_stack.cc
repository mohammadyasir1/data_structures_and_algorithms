#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int> &st, int elem) {
	// base condition
	if(st.size() == 0) {
		st.push(elem);
		return;
	}


	int top = st.top();
	st.pop();

	// hypothesis
	insert(st, elem);

	// induction
	st.push(top);
}

void reverse(stack<int> &st) {
	// base condition
	if(st.size() == 1)
		return;


	// hypothesis
	int top = st.top();
	st.pop();

	reverse(st);

	// induction
	insert(st, top);
}


int main() {
	stack<int>st, st1;

	for(int i=1; i<=5; i++) {
		st.push(i);
	}

	st1 = st;

	cout<<"original stack: ";
	while(!st1.empty()) {
		cout<<st1.top()<<" ";
		st1.pop();
	}
	cout<<endl;

	reverse(st);

	cout << "reversed Stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
	cout<<endl;

	return 0;
}