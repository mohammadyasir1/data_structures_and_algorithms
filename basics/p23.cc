#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=n; i>=1; i--){
		for(int j=n; j>i; j--){
			int space=n-i;
			cout<<" ";
			space++;
		}
		for(int j=1; j<=i; j++){
			int star=n-i+1;
			cout<<star;
			star--;
		}
		cout<<endl;
	}
	
	return 0;
}
//output
//111
// 22
//  3
