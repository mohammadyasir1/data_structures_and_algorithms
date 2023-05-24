//find fact of entered numbers

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	int fact=1;//initial val is 1 not 0
	for(int i=1; i<=n; i++){//n is included
		fact*=i;
	}
	cout<<fact<<endl;
	return 0;
}