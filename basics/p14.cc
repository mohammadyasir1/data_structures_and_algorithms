#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			char ch='A'+i+j-2;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
//output
//A B C 
//B C D 
//C D E 
