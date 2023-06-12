#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
	int s=0, e=n-1;
	int m = s+(e-s)/2;

	while(s<e) {
		if(arr[m]>=arr[0]) {
			s = m+1;
		} else {
			e = m;
		}
		m = s+(e-s)/2;
	}
	return s;//we can also return e
}

int main() {
	int arr[6]={3,8,19,13,12,1};
	cout<<"pivot is at index "<<getPivot(arr,6)<<endl;
	return 0;
}
