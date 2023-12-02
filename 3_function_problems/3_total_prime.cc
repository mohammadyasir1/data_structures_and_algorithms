#include <iostream>
using namespace std;

bool isPrime(int n) {
	for(int i=2; i<n; i++) {
		if(n%i == 0)
			return false;
	}
	return true;
}

int totalPrime(int s, int e) {
	int count = 0;
	for(int i=s; i<=e; i++) {
		if(isPrime(i))
			count++;
	}
	return count;
}

int main() {
	int s, e;
	cin>>s>>e;
	cout<<totalPrime(s, e);
	return 0;
}
