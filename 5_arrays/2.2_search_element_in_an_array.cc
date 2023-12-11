#include <iostream>
#include <array>
using namespace std;

int main() {
	int arr[10] = {1,99,0,47,33,11,9,3,97,5};
	int element;
	cout<<"enter the element to search: ";
	cin>>element;

	int size = sizeof(arr)/sizeof(arr[0]);
	int flag = 0;

	for(int i=0; i<size; i++) {

		if(arr[i] == element) {
			flag = 1;
			break;
		}
	}

	if(flag == 1) {
		cout<<"Item found"<<endl;
	} else {
		cout<<"Item not found"<<endl;
	}
	return 0;
}