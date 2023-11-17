// TC O(log n)

// #include <iostream>
#include <bits/stdc++.h>
// #include <vector>
#define m 1000000007

using namespace std;



//creating 2d matrix
//[0 0]
//[0 0]

vector<vector<long>> matrix(vector<vector<long>>a, vector<vector<long>>b) {
	

	//initializing matrix with zeros
	vector<vector<long>> ans(2, vector<long>(2,0));

	int i,j,k;
	for(i=0; i<2;i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				ans[i][j] += a[i][k] * b[k][j] % m;
			}
		}
	}

	return ans;

}


//multiplying matrix nth times
//divide and conquer apply here
vector<vector<long>> multiplyMat(vector<vector<long>>&a, int n) {

	if(n<2)
		return a;

	//create temp vector to store the muliplication matrix
	//recursion apply here
	vector<vector<long>> temp = multiplyMat(a, n/2); // 2^10 / 2 = 2^5
	
	//if n is even ---> 2^1 * 2^1
	if(n%2==0)
		return matrix(temp, temp);
	

	//means n is odd ---> 2^1 * 2^1 * 2
	return matrix(temp, matrix(temp, a));

}

int fibonacciNumber(int n){
	//matrix 
	//[1 1]
	//[1 0]
	vector<vector<long>> a = {{1,1},{1,0}};
	
	vector<vector<long>> res = multiplyMat(a, n);
	

	//[0][1] means indexing of the matrix
	//[00 01]
	//[10 11]
	return res[0][1] % m;
}

int main() {
	int n;
	cout<<"enter N to find Nth fibonacci number: ";
	cin>>n;
	cout<<fibonacciNumber(n);
	return 0;
}
