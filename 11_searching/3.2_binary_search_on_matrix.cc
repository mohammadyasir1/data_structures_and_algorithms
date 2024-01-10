#include <iostream>
#include <vector>
using namespace std;

pair<int, int> search_in_sorted_matrix(vector<vector<int>> matrix, int r, int c, int x) {
	// this pair denotes (i,j)
	// i = row index
	// j = column index
	pair<int, int> ans = {-1, -1};


	// applying binary search first on the rows
	int row_start = 0, row_end = r-1;
	int correct_row = -1;
	
	while(row_start <= row_end) {
		int mid = row_start + (row_end - row_start) / 2;

		// moving to lower part of matrix
		if(matrix[mid][0] <= x) {
			correct_row = mid;
			row_start = mid + 1;
		} else {
			// moving to upper part of matrix
			row_end = mid - 1;
		}
	}

	// applying binary search first on the rows
	// check for valid row
	if(correct_row != -1) {
		int col_start = 0, col_end = c - 1;
		while(col_start <= col_end) {
			int mid = col_start + (col_end - col_start) / 2;

			//matches element
			if(matrix[correct_row][mid] == x) {
				ans.first = correct_row;
				ans.second = mid;
				break;
			} else if(matrix[correct_row][mid] > x) {
				// moving left in row
				col_end = mid - 1;
			} else {
				// moving right in row
				col_start = mid + 1;
			}
		}
	}

	return ans;
}


int main() {

	vector<vector<int>> matrix = {{1,3,9,9,12},{14,17,19,23,27},{27,31,33,33,38},{40,41,44,56,58},{63,64,66,71,79}};
    pair<int, int> ans = search_in_sorted_matrix(matrix, 5, 5, 31);
 	cout<<"index of 31 is at "<<ans.first<<" row and "<<ans.second<<" column."<<endl;  

	return 0;
}