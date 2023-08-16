#include <iostream>
using namespace std;

void merge(int* arr, int s, int e){
	
	int mid = (s+e)/2;

	//getting length of both part
	int len1 = mid - s + 1;
	int len2 = e - mid;

	//creating space for above length
	int* first = new int[len1];
	int* second = new int[len2];

	// copying the values in array
	int indexMain = s;
	for(int i=0; i<len1; i++){
		first[i] = arr[indexMain++];
	}

	indexMain = mid+1;
	for(int i=0; i<len2; i++){
		second[i] = arr[indexMain++];
	}

	// then merge the two sorted arrays
	int index1 = 0;
	int index2 = 0;
	indexMain = s;


	while(index1 < len1 && index2 < len2){
		if(first[index1] < second[index2]){
			arr[indexMain++] = first[index1++];
		}else{
			arr[indexMain++] = second[index2++];
		}
	}

	while(index1 < len1){
			arr[indexMain++] = first[index1++];
	}

	while(index2 < len2){
			arr[indexMain++] = second[index2++];
	}

	delete []first;
	delete []second;
}

void mergeSort(int* arr, int s, int e){
	// base case
	if(s >= e)
		return;


	// getting the mid index
	int mid = (s+e)/2;

	// sorting left part of arr
	mergeSort(arr, s, mid);

	// sorting right part of arr
	mergeSort(arr, mid+1, e);

	// merge the both part
	merge(arr, s, e);

}

void printArr(int* arr, int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int arr[10] = {923,43,454,2,45,2,1,99,19,459};
	int n = 10;

	cout<<"before sorting"<<endl;
	printArr(arr,n);
	cout<<endl;

	mergeSort(arr, 0, n-1);
	
	cout<<"after sorting"<<endl;
	printArr(arr, n);	
	return 0;
}