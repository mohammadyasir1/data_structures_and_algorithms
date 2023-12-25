#include <bits/stdc++.h>
using namespace std;


void solve(vector<vector<bool>> arr, vector<vector<bool>> &paths, vector<string> &ans, string direction, int n, int x, int y) {
	if(x == n-1 && y == n-1 && arr[n-1][n-1] == 1) {
		ans.push_back(direction);
		return;
	}

	if((x > n-1 || x < 0) || (y > n-1 || y < 0) || arr[x][y] == 0 || paths[x][y] == 1)
		return;

	paths[x][y] = 1;
	// for right move
	solve(arr, paths, ans, direction+"R", n, x, y+1);


	// for down move
	solve(arr, paths, ans, direction+"D", n, x+1, y);

	// for left move
	if(!(x == n-1))
		solve(arr, paths, ans, direction+"L", n, x, y-1);


	// for left move
	if(!(y == n-1))
		solve(arr, paths, ans, direction+"U", n, x-1, y);

	paths[x][y] = 0;

	return;

}


vector<string> findAllPaths( vector<vector<bool>> &arr) {
	vector<string> ans;
	string direction = "";

	int n = arr.size();

	vector<vector<bool>> paths(n, vector<bool>(n,0));

	solve(arr, paths, ans, direction, n, 0,0);
	return ans;

}


int main() {

	vector<vector<bool>> arr = {{1, 1}, {1,1}};
	// vector<vector<bool>> arr = {{1, 0}, {1,1}};

	vector<string> ans = findAllPaths(arr);

	for(int i=0; i<ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
	cout<<endl;

	return 0;

}