#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		//first approach
		//int val = i;
		for(int j=1; j<=i; j++){
			//cout<<val<<" ";
			//val+=1;

			cout<<i+j-1<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
//output
//1
//2 3
//3 4 5
//4 5 6 7
