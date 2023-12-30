#include <bits/stdc++.h>
using namespace std;

void helper(int n, string &s, int open, int close) {
	// base case 
	if(open == n && close == n)
		cout<<s<<endl;

	if(open < n) {
		s += "{";
		helper(n, s, open + 1, close);
		s.pop_back();
	}

	if(open > close) {
		s += "}";
		helper(n, s, open, close + 1);
		s.pop_back();
	}
}

void printParantheses(int n) {

	int open = 0, close = 0;

	string s = "";

	helper(n, s, open, close);

    
}

int main() {

	int n;
	cout<<"enter the number: ";
	cin>>n;

	printParantheses(n);

	return 0;
}