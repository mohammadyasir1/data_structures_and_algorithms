#include <bits/stdc++.h>
using namespace std;


void solve(vector<int> &ARR, int B, vector<vector<int> > &ans, vector<int> &output, int index) {

	int n = ARR.size();

	if(index == n) {
		if(B == 0) {
			ans.push_back(output);
		}

		return;
	}

	if(ARR[index] <= B) {
		// pick
		output.push_back(ARR[index]);
		solve(ARR, B - ARR[index], ans, output, index);

		// backtracking
		output.pop_back();
	}

	// not pick
	solve(ARR, B, ans, output, index + 1);
}

// > > instead of >> bcz compiler version

vector<vector<int> > combSum(vector<int> &ARR, int B) {

	vector<vector<int> > ans;

	vector<int> output;

	sort(ARR.begin(), ARR.end());

	solve(ARR, B, ans, output, 0);

	return ans;
}

int main() {
	vector<int> arr;
	arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
	int target = 7;

	vector<vector<int> > ans = combSum(arr, target);

	
	for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

	return 0;
}