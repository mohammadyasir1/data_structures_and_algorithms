#include <iostream>
using namespace std;

void rev(int arr[], int size){
	int start=0;
	int end=size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
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

	rev(arr1,6);
	rev(arr2,5);

	printArr(arr1,6);
	printArr(arr2,5);

	return 0;
}
