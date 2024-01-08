#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int k) {

	for(int i=0; i<size; i++) {
		if(arr[i] == k)
			return 1;
	}
	return 0;
}

int main() {

	int arr[10] = {1,99,19,47,33};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 19;

	if(linear_search(arr, n, k))
		cout<<"present\n";
	else
		cout<<"not present\n";

	return 0;
}
