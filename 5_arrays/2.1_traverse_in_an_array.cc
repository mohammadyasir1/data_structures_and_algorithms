#include <iostream>
using namespace std;

int main() {
	//declare the array with the size and the array elements
	int arr[5] = {1,2,3,4,5};

	//iterate through the array and compare each element of the array to the item 
	cout<<"traverse on a array"<<endl;
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}