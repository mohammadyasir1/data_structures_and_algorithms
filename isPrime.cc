#include <iostream>
using namespace std;

bool isPrime(int n){
	//1=prime
	//0=not prime
	
	for(int i=2; i<n; i++){
		if(n%i==0){
			return 0;
		}
	}

	return 1;
}

int main(){

	int n;
	cin>>n;
	
	if(isPrime(n)){
		cout<<"number is prime"<<endl;
	}else{
		cout<<"number is not prime"<<endl;
	}

	return 0;
}
