#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string& s){
	stack<char> st;

	int len = s.size();

	for(int i=0; i<len; i++){

		char ch = s[i];

		if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){

			st.push(ch);

		} else{

			if(ch == ')'){

				bool flag = true;

				while(st.top() != '('){

					char top = st.top();

					//check operators in stacks between (this)
					// if exist means expression dont have redundant brackets
					if(top == '+' || top == '-' || top == '*' || top == '/'){
						flag = false;
					}

					st.pop();

				}

				if(flag == true){//there are redundant brackets
					return true;
				}

				st.pop();
			}
		}	
	}
	return false;
}

int main(){

	string s;
	cout<<"enter the expression: ";
	cin>>s;

	bool ans = findRedundantBrackets(s);
	// cout<<ans<<endl;
	if(ans)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}
