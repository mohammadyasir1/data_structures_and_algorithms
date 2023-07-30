#include <iostream>
using namespace std;

int getSum(int* arr, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	// int i = 19;//static memory allocation --- stack
	// new char;//dynamic memory allocation --- heap

	// how to access heap memory
	// char* ch = new char;


	//static memory -- memory release/free automatically
	//dynamic memory -- you've to do it manually
	//delete arr[]



	//var size array
	int n;
	cin>>n;

	int* arr = new int[n];
	//taking input in arr
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int ans = getSum(arr, n);
	cout<<"sum of array is "<<ans<<endl;
	delete arr[];
	return 0;
}