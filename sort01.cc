#include <iostream>
using namespace std;




void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortOne(int arr[], int n){	
	int left=0, right=n-1;
	while(left<right){
		while(arr[left]==0 && left < right){
			left++;
		}
		while(arr[right]==1 && left < right){
			right--;
		}
		if(left < right){
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
}

int main(){
	
	int nums[8]={1,1,0,0,0,0,1,0};

	sortOne(nums, 8);
	printArr(nums, 8);

	return 0;
}
