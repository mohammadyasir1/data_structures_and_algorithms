#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {

	int passes = n - 1;

	for(int i=0; i<passes; i++) {
		
		int min_elem_index = i;
		for(int j=i; j<n; j++) {
			if(arr[j]<arr[min_elem_index])
				min_elem_index = j;
		
		}

		swap(arr[i], arr[min_elem_index]);

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

	selection_sort(arr, n);
	cout<<"after sorting: ";
	print(arr, n);
	return 0;
}