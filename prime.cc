//check entered numbers is prime or not

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	for(int i=2; i<n; i++){
		if(n%2==0){
			cout<<"not prime";
			break;
		}else{
			cout<<"prime";
			break;
		}
	}
	return 0;
}
