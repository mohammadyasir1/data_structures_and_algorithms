#include <iostream>
using namespace std;

//recursion day 3 -- checking array is sorted or not

bool isSorted(int *arr, int size) {
	// base case
	if(size == 0 || size == 1)
		return true;

	if(arr[0] > arr[1]){
		return false;
	}else {
		// recursive relation
		int checkRem = isSorted(arr+1, size-1);
		return checkRem;
	}
}


int main() {
	int arr[5] = {19,1,0,20,7};
	int size = 5;

	bool ans = isSorted(arr, size);

	if(ans) {
		cout<<"array is sorted"<<endl;
	}else{
		cout<<"array is not sorted"<<endl;
	}

	cout<<"sum of given array is "<<arrSum(arr,size)<<endl;

}