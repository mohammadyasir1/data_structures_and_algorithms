#include <iostream>
using namespace std;

int partion(int arr[], int s, int e){

	int pivot = arr[s];
	int count = 0;
	for (int i=s+1; i<=e; i++){
		if(arr[i] <= pivot){
			count++;
		}
	}

	// place pivot element to its right index
	int pivotIndex = s+count;
	swap(arr[pivotIndex], arr[s]);

	// sorting left and right part
	int i=s, j=e;
	while(i < pivotIndex && j > pivotIndex){
		while(arr[i] < pivot){
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}

		if(i < pivotIndex && j > pivotIndex){
			swap(arr[i++], arr[j--]);
		}
	}
	

	return pivotIndex;
}

void quickSort(int arr[], int s, int e){
	// base case
	if(s >= e)
		return;

	int p = partion(arr, s, e);

	// solve left part
	quickSort(arr, s, p-1);

	// solve right part
	quickSort(arr, p+1, e);
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[8] = {1,47,99,63,19,313,59};
	int n = 8;
	quickSort(arr,0,n-1);
	printArr(arr,n);
	return 0;
}