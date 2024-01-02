#include <iostream>
#include <vector>
using namespace std;

// int largestElement(vector<int> &arr, int n) {
//     sort(arr.begin(), arr.end());
//     return arr[n-1];
// }


int largestElement(vector<int> &arr, int n) {
	int largest_element = arr[0];

	for(int i=0; i<n; i++) {
		if(arr[i] > largest_element)
			largest_element = arr[i];
	}
	return largest_element;
}

int main() {
	int n;
	vector<int> arr = {4,7,8,6,7,6};
	n = 6;

	cout<<"largest element in the array is "<<largestElement(arr, n)<<endl;
	return 0;
}
