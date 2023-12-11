#include <iostream>
#include <array>
using namespace std;

int main() {
	int arr[4] = {1,99,33,11};
	int element, pos;
	cout<<"enter the position and element: ";
	cin>>pos>>element;

	int size = sizeof(arr)/sizeof(arr[0]);

	if(pos <= size && pos > 0) {

		//shift all the elements from the last index to pos by 1 
		//position to right
		for(int i=size; i>pos; i--)
			arr[i] = arr[i-1];

		//insert element at the given position
		arr[pos] = element;

		for(int i=0; i<=size; i++) {
			cout<<arr[i]<<" "; 
		}
		cout<<endl;
	} else
		cout<<"Invalid position"<<endl;

	return 0;
}