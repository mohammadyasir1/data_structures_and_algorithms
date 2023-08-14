#include <iostream>
using namespace std;

void sortArray(int* arr, int n){
	// base case
	// already sorted
	if(n==0 || n==1){
		return;
	}

	for(int i=0; i<n-1; i++){
		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}

	sortArray(arr, n-1);
}

void printArr(int* arr, int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[9] = {9,53,19,1,47,99,97,39,59};
	sortArray(arr,9);
	printArr(arr,9);
	return 0;
}