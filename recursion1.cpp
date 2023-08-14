#include <iostream>
using namespace std;

// Recursion
// def --- 
// According to book, when the function call itself directly or indirectly that's called recursion

// ex ---
// apni bhasa me samjhe to koi badi problem ka solution 
// depend on same type ki choti problem par to uske liye hum recursion use karte hai
// jaese ye ------- f(x) = x * f(x-1)

// Recursion required two case 
// 1 - base case 
// where to stop
// in base case return is mandatory

// 2 - recursive relation
// like f(x) = x * f(x-1)

// 3 - processing
//optional

int fact(int n){
	//base case
	if(n==0){
		return 1;
	}

	// processing
	// cout<<n;
	//n++,n-- for example

	// recursive relation
	return n * fact(n - 1);
}


int power(int n){
	//base case
	if(n==0){
		return 1;
	}

	// processing
	// cout<<n;
	//n++,n-- for example

	// recursive relation
	return 2 * power(n - 1);
}

int main(){
	int n;
	cin>>n;
	int ans = fact(n);
	int po = power(n);
	cout<<"factorial of "<<n<<" is "<<ans<<endl;
	cout<<"power of "<<n<<" is "<<po<<endl;

	return 0;
}