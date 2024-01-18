#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//sort
int find_duplicate(vector<int> &arr, int n){
	sort(arr.begin(), arr.end());
	int dup=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1])
			dup=arr[i];
	}
	return dup;
}

//set
// int findDuplicate(vector<int> &arr, int n)
// {

//     // Create an unordered set to store each element.
//     unordered_set<int> uset;

//     // For each value of array perform.
//     for (int i : arr) 
//     {

//         // Check if current element is already present.
//         if (uset.find(i) != uset.end()) 
//         {

//             // If present return this repeated element.
//             return i;
//         }
//         else
//         {

//             // If element not found, insert it into the set.
//             uset.insert(i);
//         }
//     }

//     return -1;
// }

int main() {
	vector<int> arr = {3, 1, 3, 4, 2};
	int n = arr.size();
	cout<<"duplicate element in the array are: "<<find_duplicate(arr, n)<<endl;
	return 0;
}
