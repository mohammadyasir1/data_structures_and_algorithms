#include <iostream>
#include <array>
using namespace std;

int main() {
	int arr[5] = {1,20,5,78,30};
	int size = sizeof(arr)/sizeof(arr[0]);

	int element, index = -1;

	cout<<"enter element to delete: ";
	cin>>element;

	//iterate the array elements using loop
	//if any element matches the key, store the index
	for(int i=0; i<size; i++) {
		if(arr[i] == element) {
			index = i;
			break;
		}
	}

	if(index != -1) {
		//shift all the element from index+1 by one position to the left
		for(int i=index; i<size; i++) {
			arr[i] = arr[i+1];
		}

		cout<<"new array elements"<<endl;
		for(int i=0; i<size-1; i++) {
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	} else {
		cout<<"element not found"<<endl;
	}

	return 0;
}