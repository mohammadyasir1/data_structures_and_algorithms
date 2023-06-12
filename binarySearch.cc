#include <iostream>
using namespace std;

int binSearch(int arr[], int size, int key){

	int start = 0;
	int end = size-1;

	//int mid = (start + end)/2;

	int mid = start + (end-start)/2;
	
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

int main(){

	int odd[5] = {5,4,3,2,1};
	int even[8] = {1,8,19,21,47,99,119,313};

	int oddIndex = binSearch(odd,5,3);
	
	cout<<"index of 3 is "<<oddIndex<<endl;

	int evenIndex = binSearch(even,8,313);

	cout<<"index of 313 is "<<evenIndex<<endl;

	return 0;
}
