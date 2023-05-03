#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	//int count=1;
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			int space=n-i;
			cout<<" ";
			space--;
		}
		for(int j=1; j<=i; j++){
			cout<<j;
			//count++;
		}
		int val=i-1;
		for(int j=1; j<i; j++){
			cout<<val;
			val--;
		}
		
		cout<<endl;
	}
	
	return 0;
}
//expected output
//   1
//  121
// 12321
//1234321
