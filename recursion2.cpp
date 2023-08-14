#include <iostream>
using namespace std;

// int fib(int n){
// 	//base case
// 	if (n==0)
// 		return 0;
// 	if (n==1)
// 		return 1;

// 	//recursive relation
// 	int ans = fib(n-1)+fib(n-2);
// 	return ans;
// }

void sayDigit(int n, string arr[]){
	//base case
	if(n==0)
		return;

	//processing
	int digit = n%10;
	n/=10;

	//recursive relation
	sayDigit(n,arr);

	cout<<arr[digit]<<" ";

}


int main(){


	// int n;
	// cin>>n;
	// cout<<"0 1 "<<fib(n);

	string arr[10] = {"zero","one","two","three","four","five"
						,"six","seven","eight","nine"};

	int n;
	cin>>n;
	sayDigit(n, arr);
	return 0;
}