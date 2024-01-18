#include <bits/stdc++.h>
using namespace std;

// brute force
// int findMajorityElement(int arr[], int n) {
// 	// Iterating each element in the array/list and check if it is a majority element.
// 	for(int i = 0; i < n ; i++) {	
// 		// Variable to store the frequency of the current element at index 'i'.
// 		int maxCount = 0;

// 		// Iterating the array/list to count the frequency of the current element at index 'i'.
// 		for(int j = 0; j < n; j++) {
// 			// Increment the count of variable if an occurrence of the current element is observed.
// 			if(arr[j] == arr[i]) {
// 				maxCount++;
// 			}	
// 		}

// 		// If count of any element exceeds 'n' / 2, then it is the majority element.
// 		if(maxCount > n/2) {
// 			return arr[i];
// 		}
// 	}
// 	// If no majority element found, return -1.
// 	return -1;
// }

// using hashmap
int find_majority_element(int arr[], int n) {
	map<int, int> mp;

	// iterating over arr
	for(int i=0; i<n; i++)
		mp[arr[i]]++;

	// iterating over map
	for(auto it: mp) {
		if(it.second > n/2)
			return it.first;
	}
	return -1;
}

int main() {

	int arr[5] = {2, 3, 9, 2, 2};
	int n = 5;
	cout<<"majority elements are: "<<find_majority_element(arr, n)<<endl;
	return 0;
}
