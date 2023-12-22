#include <bits/stdc++.h>
using namespace std;


void solve(vector<vector<int>> &superSet, vector<int> arr, vector<int> ans, int n, int k, int i) {   

	//i is the iterator from 0 to n

    if (i == n) {

        if(k==0) {
            superSet.push_back(ans);
        }

        return;
    }

    //not including element
    solve(superSet, arr, ans, n, k, i + 1);


    //including element
    ans.push_back(arr[i]);

 

    //calculating sum by subtracting element from k so eventually it become 0 then we can get our required subset
    solve(superSet, arr, ans, n, k-arr[i], i + 1);

    return;

}

 

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k) {

    vector<vector<int>> superSet;
    vector<int> ans;

    solve(superSet, arr, ans, n, k, 0); 

    return superSet;

}



int main() {

	int n = 4; 
	int k = -2;

	vector<int> arr = {-9, 4, -6, 7};

	vector<vector<int>> ans = findSubsetsThatSumToK(arr, n, k);

	for(int i=0; i<ans.size(); i++) {
		for(int j=0; j<ans.size(); j++) {
			cout<<ans[i][j]<<" ";
		}
	}

	cout<<endl;

	return 0;
}