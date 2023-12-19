#include <bits/stdc++.h>
using namespace std;


bool isValidParenthesis(string s) {
	int len = s.size();

	stack<char>st;

	for(int i=0; i<len; i++) {

		if(s[i] == '[' || s[i] == '{' || s[i] == '(') {
			st.push(s[i]);
		} else if(!st.empty() && (s[i] == ']' && st.top() == '[' || s[i] == '}' && st.top() == '{' || s[i] == ')' && st.top() == '(')){
			st.pop();
		} else {
			return 0;
		}
	}

	if(st.empty())
		return 1;
}
	



int main() {

	string s;
	cout<<"enter expressions: ";
	cin>>s;

	bool ans = isValidParenthesis(s);
	if(ans)
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";

	return 0;
}