#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=n; j>i; j--){
			int space=n-i;
			cout<<" ";
			space--;
		}
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		
		cout<<endl;
	}
	
	return 0;
}
//output
//  1
// 22
//333
