#include <iostream>
using namespace std;

void revAlter(int arr[], int size){
	for(int i=0; i<size; i+=2){
		if((i+1)<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

void printArr(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}	

int main(){

	int arr1[6]={1,2,3,4,5,6};
	int arr2[5]={19,8,1,99,47};

	revAlter(arr1,6);
	revAlter(arr2,5);

	printArr(arr1,6);
	printArr(arr2,5);

	return 0;
}
