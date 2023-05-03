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
		//int i=1;
		int val=n-i+1;
		for(int j=1; j<=i; j++){
			cout<<val;
			val++;
		}
		cout<<endl;
	}
	
	return 0;
}
//output
//123
// 23
//  3
