#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countBits(int n) {
	int count = 0;
	while(n != 0) {
		count += n&1;
		n = n>>1;
	}
	return count;
}


int main() {
	int n;
	cout<<"Enter the value of N: ";
	cin>>n;
	cout<<"Number of 1's in "<<n<<" is "<<countBits(n)<<endl;
	return 0;
}

