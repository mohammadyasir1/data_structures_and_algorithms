#include <iostream>
using namespace std;


// for 1-N
void print(int n){
	
	// base condition
	if(n==0)
		return;

	// hypothesis
	print(n-1);

	// induction
	cout<<n<<" ";

}

// for N-1
void print1(int n){
	
	// base condition
	if(n==0)
		return;

	// induction
	cout<<n<<" ";

	// hypothesis
	print1(n-1);

}

int main() {

	int n=7;

	cout<<"for 1-N"<<endl;
	print(n);
	cout<<endl;

	cout<<"for N-1"<<endl;
	print1(n);
	cout<<endl;
	
	return 0;
}
