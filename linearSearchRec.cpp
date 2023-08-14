#include <iostream>
using namespace std;

bool search(int *arr, int size, int k){
	if(size == 0)
		return 0;

	if(arr[0] == k){
		return true;
	}else {
		int rem = search(arr+1, size-1, k);
		return rem;
	}
}

int main(){
	int arr[5] = {99,39,19,47,97};
	int size = 5;
	int key = 119;

	int found = search(arr, size, key);
	if(found){
		cout<<"key is found"<<endl;
	}else {
		cout<<"key not found"<<endl;
	}
}