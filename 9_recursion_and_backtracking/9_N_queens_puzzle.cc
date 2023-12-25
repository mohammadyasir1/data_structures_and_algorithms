#include <bits/stdc++.h>
using namespace std;

void add(vector<vector<int>> &ans, vector<vector<int>> &board, int n) {
	vector<int> temp;


	// where,
	// x = row, y = column
	for(int x=0; x<n; x++) {

		for(int y=0; y<n; y++) {
			temp.push_back(board[x][y]);
		}
	}

	ans.push_back(temp);

	return;
}

bool isSafe(int x, int y, vector<vector<int>> &board, int n) {
	int row = x;
	int column = y;

	while(column >= 0) {
		if(board[x][column] == 1)
			return false;
		column--;
	}


	// diagonal up
	column = y;
	row = x;

	while(column >= 0 && row >= 0) {
		if(board[row][column] == 1)
			return false;

		column--;
		row--;
	}


	// diagonal down
	column = y;
	row = x;

	while(column >= 0 && row < n) {
		if(board[row][column] == 1)
			return false;

		column--;
		row++;
	}

	return true;


}


void solve(vector<vector<int>>&board, vector<vector<int>>&ans, int n, int y) {
	if(y == n) {

		add(ans, board, n);

		return;
	}

	for(int i=0; i<n; i++) {

		if(isSafe(i, y, board, n)) {

			board[i][y] = 1;

			solve(board, ans, n, y+1);

			board[i][y] = 0;
		}
	}

}


vector<vector<int>> nQueens(int n) {

	vector<vector<int>> board(n, vector<int>(n,0));

	vector<vector<int>> ans;

	solve(board, ans, n, 0);

	return ans;

}


int main() {

	int n;

	cout<<"enter the number of Queen's: ";
	cin>>n;

	vector<vector<int>> ans = nQueens(n);


	// this condition is only valid for two test case 3 and 4
	if(n >= 4){
		for(int i=0; i<ans.size(); i++) {

			for(int j=0; j<ans[i].size(); j++) {

				cout<<ans[i][j]<<" ";

			}
			cout<<endl;
		}
	} else {
		cout<<"No possible configuration exists for "<<n<<" Queen's"<<endl;
	}

	



	return 0;
}