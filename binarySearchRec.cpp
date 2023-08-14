#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
	// base case
	if(s>e)
		return false;

	int mid = s + (e-s)/2;

	// if found
	if(arr[mid] == k)
		return true;

	if(arr[mid] < k){
		return binarySearch(arr, mid+1, e, k);
	}else {
		return binarySearch(arr, s, mid-1, k);
	}

}

void getArr(int* arr, int size){
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
}


int main(){
	int size;
	cout<<"enter the size of array: ";
	cin>>size;

	int* arr = new int[size];
	cout<<"enter the array elements: ";
	getArr(arr, size);
	// int arr[9] = {1,3,5,19,23,39,47,53,99};
	// int size = 9;
	int key;
	cout<<"enter the key you want to find in array: ";
	cin>>key;

	int found = binarySearch(arr,0,8,key);
	if(found){
		cout<<"present"<<endl;
	}else {
		cout<<"absent"<<endl;
	}


	delete arr;
	return 0;

}