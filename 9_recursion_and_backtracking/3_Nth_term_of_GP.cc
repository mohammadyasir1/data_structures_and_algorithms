#include <bits/stdc++.h>
using namespace std;

// #define m 1000000007


long power(int r, int n, int mod) {

	// base case
	if(n == 0)
		return 1;

	long tmp = power(r, n/2, mod) % mod;

	if(n%2 == 0)
		return (tmp * tmp) % mod;
	else
		return (((tmp * tmp) % mod) * r) % mod;
}

int nthTermOfGP(int N, int A, int R) {

	int mod = 1000000007;

	int ans = (A * power(R, N-1, mod)) % mod;

	return ans;
}

int main() {
	int n, a, r;
	cout<<"enter the Nth term, first term and the ratio: ";
	cin>>n>>a>>r;

	cout<<"Nth term of the GP is "<<nthTermOfGP(n, a, r)<<endl;
	return 0;
}