#include <iostream>
using namespace std;

void sort(int arr[], int n){
	//where n is size of arr
	
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex])
				minIndex = j;
		}
		swap(arr[minIndex], arr[i]);
	}
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int nums[5]={64,25,12,22,11};
	sort(nums,5);
	printArr(nums,5);	
	return 0;
}
