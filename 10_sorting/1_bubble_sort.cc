#include <iostream>
using namespace std;


void bubble_sort(int arr[], int n) {
	int passes = n;

	for(int i=0; i<passes; i++) {
		bool flag = false;
		for(int j=0; j<n-1; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				flag = true;
			}
		}

		if(flag == false)
			break;
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

	bubble_sort(arr, n);

	cout<<"after sorting: ";
	print(arr, n);

	return 0;
}
