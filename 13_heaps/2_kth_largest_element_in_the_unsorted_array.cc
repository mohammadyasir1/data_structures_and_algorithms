#include<bits/stdc++.h>
using namespace std;

int kth_largest(vector<int>& arr, int size, int K) {
	// creation of min heap
	priority_queue<int, vector<int>, greater<int>> min_heap;

	// pushing the element in heap remember length of heap does not exceed K
	for(int i=0; i<size; i++) {
		min_heap.push(arr[i]);
		
		if(min_heap.size() > K)
			min_heap.pop();
	}

	// return the top element
	return min_heap.top();
}

void print(vector<int>& arr, int size) {
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {

	vector<int> arr = {2,1,5,6,3,8};
	int size = arr.size();
	int K = 3;
	cout<<"given array is: ";
	print(arr,size);

	cout<<"kth largest element is: "<<kth_largest(arr,size,K)<<endl;
	return 0;
}