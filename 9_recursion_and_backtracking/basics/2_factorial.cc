#include <iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0)
		return 1;

	// hypothesis
	int factRes = fact(n-1);

	// induction
	int ans = n * factRes;

	return ans;
}

int main(){

	int n=5;

	cout<<fact(n)<<endl;

	return 0;
}