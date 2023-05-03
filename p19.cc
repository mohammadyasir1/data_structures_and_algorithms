#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		//easy sol of prev questn - 14
		char ch='A'+i-1;	
		for(int j=1; j<=n; j++){
			cout<<ch<<" ";
			ch+=1;
		}
		cout<<endl;
	}
	
	return 0;
}
//output
//A B C
//B C D
//C D E
