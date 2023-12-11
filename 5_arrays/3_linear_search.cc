#include <iostream>
#include <vector>

using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
	for(int i=0; i<n; i++) {
		if(arr[i] == num) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n, num;
	int index = -1;
	vector<int> arr = {1,2,3,4,5};
	n = 5;

	cout<<"enter element to search: ";
	cin>>num;

	index = linearSearch(n, num, arr);

	if(index != -1) {
		cout<<"element found at index "<<index<<endl;
	} else {
		cout<<"element not found"<<endl;
	}

	return 0;

}


