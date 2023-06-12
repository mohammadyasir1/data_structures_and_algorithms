//find fast and last occurence of a given number in an array

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k) {
	int s = 0, e = n-1;
	int mid = s + (e - s)/2;
	int ans = -1;

	while(s <= e) {

		if(arr[mid] == k) {
			ans = mid;
			e = mid-1;
		} else if (k > arr[mid]) {
			//go to right
			s = mid+1;
		} else {
			e = mid-1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}

int lastOcc(int arr[], int n, int k) {
	int s = 0, e = n-1;
	int mid = s + (e - s)/2;
	int ans = -1;

	while(s <= e) {
		if(arr[mid] == k) {
			ans = mid;
			s = mid+1;
		} else if (k > arr[mid]) {
			//go to right
			s = mid+1;
		} else {
			e = mid-1;
		}
		mid = s + (e-s)/2;
	}
	return ans;

}

int main() {

	int even[10] = {1,2,4,4,4,4,4,4,4,5};

	cout<<"first occ of 4 is at index "<<firstOcc(even,10,4)<<endl;
	cout<<"last occ of 4 is at index "<<lastOcc(even,10,4)<<endl;
	return 0;
}

