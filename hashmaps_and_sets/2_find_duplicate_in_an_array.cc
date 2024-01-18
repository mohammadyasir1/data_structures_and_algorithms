#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_duplicate(vector<int> &arr, int n){
	sort(arr.begin(), arr.end());
	int dup=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1])
			dup=arr[i];
	}
	return dup;
}

int main() {
	vector<int> arr = {3, 1, 3, 4, 2};
	int n = arr.size();
	cout<<"duplicate element in the array are: "<<find_duplicate(arr, n)<<endl;
	return 0;
}