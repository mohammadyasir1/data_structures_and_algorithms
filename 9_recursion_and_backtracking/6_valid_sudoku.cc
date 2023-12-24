#include <iostream>
#include <vector>

using namespace std;


// backtracking approach

// first check all the conditions if satisfy then
bool isValid(int matrix[9][9], int row, int col, int n) {
	for(int i=0; i<9; i++) {

		if(matrix[row][i] == n)
			return false;

		if(matrix[i][col] == n)
			return false;

		if(matrix[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == n)
			return false;
	}

	return true;
}


// then insert the valid number
bool solve(int matrix[9][9]) {

	for(int i=0; i<9; i++) {

		for(int j=0; j<9; j++) {

			if(matrix[i][j] == 0) {

				for(int n=1; n<=9; n++) {

					if(isValid(matrix, i, j, n)) {


						matrix[i][j] = n;

						if(solve(matrix) == true)
							return true;
						else
							matrix[i][j] = 0;
					}
				}

				return false;

			}


		}
	}

	return true;
}



//and check the sudoku
bool isItSudoku(int matrix[9][9]) {
	
	// recursive call
	return solve(matrix);
	
}

int main() {

	int matrix[9][9] = {{9, 0, 0, 0, 2, 0, 7, 5, 0},
						{6, 0, 0, 0, 5, 0, 0, 4, 0},
						{0, 2, 0, 4, 0, 0, 0, 1, 0},
						{2, 0, 8, 0, 0, 0, 0, 0, 0},
						{0, 7, 0, 5, 0, 9, 0, 6, 0},
						{0, 0, 0, 0, 0, 0, 4, 0, 1},
						{0, 1, 0, 0, 0, 5, 0, 8, 0},
						{0, 9, 0, 0, 7, 0, 0, 0, 4},
						{0, 8, 2, 0, 4, 0, 0, 0, 6}};

	bool ans = isItSudoku(matrix);

	if(ans)
		cout<<"Yes this is valid sudoku\n";
	else
		cout<<"No this is not valid sudoku\n";

	return 0;
}