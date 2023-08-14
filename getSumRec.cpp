#include <iostream>
using namespace std;

int arrSum(int *arr, int size){
	// base case
	if(size == 0)
		return 0;

	if(size == 1){
		return arr[0];
	}else{
		int rem = arrSum(arr+1, size-1);
		int sum = arr[0] + rem;
		// return arr[size-1] + arrSum(arr, size-1); 
		return sum;
	}
}

int main() {
	int arr[5] = {19,1,0,20,7};
	int size = 5;


	cout<<"sum of given array is "<<arrSum(arr,size)<<endl;

}
