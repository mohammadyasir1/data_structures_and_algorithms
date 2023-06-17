#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int arr[], int n) {
	for(int i=1; i<n; i++) {
		//i=1 because we assure 0th index is sorted in given arr
		//1st loop is for round
		int j=i-1;
		int temp = arr[i];
		while(j>=0) {
			if(arr[j] > temp) {
				//shifting right
				arr[j+1] = arr[j];
			} else {
				break;
			}
			j--;
		}
		arr[j+1] = temp;
	}
}


int main() {

	int nums[7]={10,1,7,4,8,2,11};

	insertionSort(nums,7);
	printArr(nums,7);

	return 0;

}
