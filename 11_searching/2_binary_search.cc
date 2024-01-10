#include <iostream>
using namespace std;

int binary_search(int arr[], int key, int size) {

	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;

	while(start <= end) {
		

		if(arr[mid] == key) {
			return mid;
		}


		//go to right if key>mid

		if(key > arr[mid]) {
			start = mid+1;
		} else {
			end = mid-1;
		} 

		mid = start + (end-start)/2;

	}

	return -1;

}

int main() {

	int odd[5] = {5,4,3,2,1};
	int even[8] = {1,8,19,21,47,99,119,313};

	int oddIndex = binary_search(odd,3,5);
	
	cout<<"index of 3 is "<<oddIndex<<endl;

	int evenIndex = binary_search(even,313,8);

	cout<<"index of 313 is "<<evenIndex<<endl;
}