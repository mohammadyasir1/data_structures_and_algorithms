#include <bits/stdc++.h> 
using namespace std;

// bool splitIntoKUtil(vector<int> &arr, vector<int> &sumOfSubsets, vector<bool> &isElementConsidered, int subset, int K, int N, int currentIndex, int maxLimit) {
    
// 	// We found a distribution
//     if (sumOfSubsets[currentIndex] == subset) {
//         if (currentIndex == K - 2) {
//             return 1;
//         }

//         // recursive call for next generation
//         return splitIntoKUtil(arr, sumOfSubsets, isElementConsidered, subset, K, N, currentIndex + 1, N - 1);
//     }

//     for (int i = maxLimit; i >= 0; i--) {
    	
//     	// is taken already
//         if (isElementConsidered[i]) {
//             continue;
//         }
//         int temp = sumOfSubsets[currentIndex] + arr[i];

//         // check if ith element can be included in current subset
//         if (temp <= subset) {
//             isElementConsidered[i] = 1;
//             sumOfSubsets[currentIndex] += arr[i];
            
//             // recursive call to check if a distribution is possible
//             bool next = splitIntoKUtil(arr, sumOfSubsets, isElementConsidered, subset, K, N, currentIndex, i - 1);
//             isElementConsidered[i] = 0;
//             sumOfSubsets[currentIndex] -= arr[i];
            
//             // found a distribution
//             if (next) {
//                 return true;
//             }
//         }
//     }
    
//     // did not find a distribution
//     return 0;
// }

// // main function
// bool splitArray(vector<int> &arr, int K) {
//     int N = arr.size();
//     if (K == 1) {
//         return true;
//     }

//     if (N < K) {
//         return false;
//     }

//     // Calculate sum of array
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         sum += arr[i];
//     }
//     if (sum % K != 0) {
//         return false;
//     }
//     int subset = sum / K;

//     vector<int> sumOfSubsets(K);
//     vector<bool> isElementConsidered(N);

//     for (int i = 0; i < K; i++) {
//         sumOfSubsets[i] = 0;
//     }
//     for (int i = 0; i < N; i++) {
//         isElementConsidered[i] = false;
//     }

//     sumOfSubsets[0] = arr[N - 1];
//     isElementConsidered[N - 1] = true;

//     // Check if a distribution exists
//     return splitIntoKUtil(arr, sumOfSubsets, isElementConsidered, subset, K, N, 0, N - 1);
// }


bool solve(vector<int> nums, vector<bool> &isVisited, int currSum, int index, int subsetSum, int k) {

	if (k == 0)
        return true;

	if(currSum > subsetSum)
		return false;

	if(currSum == subsetSum)
		return solve(nums, isVisited, 0, 0, subsetSum, k-1);

	for(int i=index; i<nums.size(); i++) {
		if(isVisited[i])
			continue;

		isVisited[i] = true;

		if(solve(nums, isVisited, currSum + nums[i], i+1, subsetSum, k))
			return true;


		isVisited[i] = false;

		if(currSum == 0)
			break;
	}

	return false;
}

bool splitArray(vector<int> &nums, int k) {
	int n = nums.size();

	if (k > n)
        return false;

	int sum = 0;

	for(int i=0; i<n; i++) {
		sum += nums[i];
	}

    if (nums.size() < k || sum % k)
        return false;

	int subsetSum = sum / k;

	vector<bool> isVisted(n, false);

	sort(nums.begin(), nums.end(), greater<int>());

	return solve(nums, isVisted, 0, 0, subsetSum, k);
}


int main() {
	int n;
	cout<<"enter the size of array: ";
	cin>>n;


	vector<int> arr(n);
	cout<<"enter the array elements: ";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	int k;
	cout<<"enter the value of subsets: ";
	cin>>k;

	bool ans = splitArray(arr, k);

	if(ans)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";

	return 0;
}
