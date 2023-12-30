#include <bits/stdc++.h>
using namespace std;


void solve(string &s, int index, vector<string> &ans) {

	if(index >= s.size()) {
		ans.push_back(s);
		return;
	}

	for(int j=index; j<s.size(); j++) {
		swap(s[index], s[j]);
		solve(s, index+1, ans);

		// backtracking
		swap(s[index], s[j]);

	}

}


vector<string> findPermutations(string &s) {
	vector<string> ans;

	int i = 0;

	solve(s, i, ans);

	sort(ans.begin(),ans.end());

	return ans;
}

int main() {
	string s;
	cout<<"enter the string: ";
	cin>>s;

	vector<string> ans = findPermutations(s);

	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}

	cout<<endl;
	
	return 0;
}