#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	//where n is size
	for(int i=1; i<n; i++){
		//round 1 to n-1
		bool swapped = false;
		for(int j=0; j<n-i; j++) {
			if(arr[j] > arr[j+1]) {
				swapped = true;
				swap(arr[j], arr[j+1]);
			}
		}
		if(swapped == false)
			//means arr is already sorted
			break;
	}

}

void printArr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {

	int nums[6] = {10,1,7,6,14,9};
	bubbleSort(nums, 6);
	printArr(nums, 6);
	return 0;
}
