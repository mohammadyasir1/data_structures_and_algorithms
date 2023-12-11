#include <iostream>
#include <array>
using namespace std;

int main() {
	// Declare the array with the size and the array elements
	int arr[10] = {1,99,0,47,33,11,9,3,97,5};
	
	// Declare the element to be searched 
	int element;
	cout<<"enter the element to search: ";
	cin>>element;

	// Get the size of arr
	int size = sizeof(arr)/sizeof(arr[0]);

	// Declare a flag variable and initialise it to 0 
	int flag = 0;

	// Iterate through the array and compare each element of the array to the item 
	for(int i=0; i<size; i++) {

		if(arr[i] == element) {
			// If the item is found, set the flag to 1 
			flag = 1;
			break;
		}
	}

	// Check the flag value 
	if(flag == 1) {
		cout<<"Item found"<<endl;
	} else {
		cout<<"Item not found"<<endl;
	}
	return 0;
}
