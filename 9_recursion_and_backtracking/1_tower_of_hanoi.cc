#include <bits/stdc++.h>
using namespace std;



// online submission
//function to solve
// void solve(int n, int src, int aux, int des, vector<vector<int>>& ans) {

// 	//base case
// 	if(n==1){
//         ans.push_back({src, des});
// 		return;
// 	}

// 	//recursive call
// 	solve(n-1, src, des, aux, ans);

// 	//store to ans 
// 	ans.push_back({src, des});

// 	//recursive call
// 	solve(n-1, aux, src, des, ans);

// }

// vector<vector<int>> towerOfHanoi(int n) {

// 	vector<vector<int>> ans;

// 	solve(n, 1, 2, 3, ans);

// 	return ans;
// }


void towerOfHanoi(int n, char src, char aux, char des) {
	// base case
	if(n == 1){
		cout<<i<<"] "<<src<<" -> "<<des<<endl;
		
		return;
	}

	// recursive call
	towerOfHanoi(n-1, src, des, aux);
	towerOfHanoi(1, src, aux, des);
	towerOfHanoi(n-1, aux, src, des);

}





int main() {
	int n;
	cout<<"enter the value of n: ";
	cin>>n;
	towerOfHanoi(n, 'A', 'B', 'C');
	return 0;
}
