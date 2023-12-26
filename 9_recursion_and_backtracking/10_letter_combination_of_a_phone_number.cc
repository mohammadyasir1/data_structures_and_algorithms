#include <bits/stdc++.h>
using namespace std;


void solve(string s, string output, int index, vector<string> &ans, string mapping[]) {

	// base case
	if(index >= s.length()) {
		ans.push_back(output);
		return;
	}

	int number = s[index] - '0';

	string value = mapping[number];

	for(int i=0; i<value.length(); i++) {
		output.push_back(value[i]);
		solve(s, output, index+1, ans, mapping);
		output.pop_back();
	}
}

vector<string> combinations(string s){
	
	vector<string> ans;

	if(s.length() == 0)
		return ans;

	string output;

	int index = 0;

	string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 

	solve(s, output, index, ans, mapping);
	
}


int main() {

	string s;
	cout<<"enter the number from 0-9 like 23: ";
	cin>>s;

	vector<string> ans = combinations(s);

	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
	cout<<endl;




	return 0;
}