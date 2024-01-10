#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {
	
	int m = matrix[0].size(), n = matrix.size();

	int start = 0, end = m * n - 1;

	while(start <= end) {

		int mid = start + (end - start) / 2;

		int row = mid / m, column = mid % m;

		if(matrix[row][column] == target)
			return 1;
		else if(matrix[row][column] > target)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return 0;

}

int main() {

	int target;
	vector<vector<int>> matrix = {{1,3,9,9,12},{14,17,19,23,27},{27,31,33,33,38},{40,41,44,56,58},{63,64,66,71,79}};
	cin>>target;
	bool ans = searchMatrix(matrix, target);

	if(ans)
		cout<<"True\n";
	else
		cout<<"False\n";

	return 0;
}