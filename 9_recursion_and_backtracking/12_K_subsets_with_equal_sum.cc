#include <bits/stdc++.h> 
using namespace std;

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