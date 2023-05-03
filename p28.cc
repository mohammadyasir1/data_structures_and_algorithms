#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=n; i>=1; i--){
	//	for(int j=n; j>i; j--){
	//		int space=n-i;
	//		cout<<" ";
	//		space--;
	//	}
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		for(int j=n; j>=1; j--){
			cout<<j;
		}
		
		cout<<endl;
	}
	
	return 0;
}
//expected output
//1234554321
//1234**4321
//123****321
//12******21
//1********1

