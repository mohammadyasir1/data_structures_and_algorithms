#include <iostream>
using namespace std;

int factorial(int a){
	int fact=1;
	for(int i=1; i<=a; i++){
		fact=fact*i;
	}
	return fact;
}

int ncr(int n, int r){
	int numerator = factorial(n);
	int denomerator = factorial(r) * factorial(n-r);
	int ans= numerator/denomerator;
	return ans;
}

int main(){

	int n,r;
	cin>>n>>r;
	
	cout<<"answer is "<<ncr(n,r)<<endl;
	

	return 0;
}
