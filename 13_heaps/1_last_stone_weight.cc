#include<bits/stdc++.h>
using namespace std;

int weight_of_last_stone(int arr[], int n) {
	priority_queue<int> max_heap;

	for(int i=0; i<n; i++)
		max_heap.push(arr[i]);

	while(max_heap.size() > 1) {
		int x = max_heap.top();
		max_heap.pop();

		int y = max_heap.top();
		max_heap.pop();

		int z = x-y;
		
		if(z != 0)
			max_heap.push(z);
	}

	if(max_heap.size() == 1)
		return max_heap.top();

	return 0;
}

void print(int arr[], int size) {
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {

	int arr[4] = {2,7,4,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	print(arr,size);

	int last_stone = weight_of_last_stone(arr, size);
	cout<<"last stone is: "<<last_stone<<endl;
	return 0;
}
