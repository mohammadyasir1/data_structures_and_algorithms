#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

	for(int i=1; i<n; i++) {

		int curr = arr[i];

		// prev pos index
		int j = i - 1;

		while(j >= 0 && arr[j] > curr) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = curr;
	}

}

void print(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {

	int arr[] = {6, 18, 13, 11, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"before sorting: ";
	print(arr, n);

	insertion_sort(arr, n);
	cout<<"after sorting: ";
	print(arr, n);

	return 0;
}