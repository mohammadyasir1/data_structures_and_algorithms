#include <iostream>
using namespace std;

int arraySum(int arr[], int n) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	int n = 5;

	cout<<arraySum(arr, n)<<endl;

	int arr1[5] = {-1,5,3,0};
	int n1 = 4;

	cout<<arraySum(arr1, n1)<<endl;

	return 0;
}