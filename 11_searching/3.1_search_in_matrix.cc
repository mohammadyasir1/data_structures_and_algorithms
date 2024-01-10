#include <iostream>
#include <vector>
using namespace std;

pair<int, int> search_in_sorted_matrix(vector<vector<int>> matrix, int r, int c, int x) {
	pair<int, int> ans = {-1, -1};

	for(int i=0; i<r; i++) {

		for(int j=0; j<c; j++) {

			if(matrix[i][j] == x) {
				ans.first = i;
				ans.second = j;
			}
		}
	}

	return ans;
}


int main() {
	vector<vector<int>> matrix = {{1,3,9,9,12},
								  {14,17,19,23,27},
								  {27,31,33,33,38},
								  {40,41,44,56,58},
								  {63,64,66,71,79}};

    pair<int, int> ans = search_in_sorted_matrix(matrix, 5, 5, 31);

    // for(int i=0; i<ans.first.size(); i++) {  
    	cout<<"index of 31 is at "<<ans.first<<" row and "<<ans.second<<" column."<<endl;  
  	// }  



	return 0;
}