#include <iostream>
using namespace std;

int fib(int n){
	// base case
	if(n==0 || n==1)
		return n;

	// hypothesis
	int fibRes1 = fib(n-1);
	int fibRes2 = fib(n-2);

	// induction
	int ans = fibRes1+fibRes2;

	return ans;
}

int main(){
	int n=7;
	cout<<fib(n)<<endl;
	return 0;
}