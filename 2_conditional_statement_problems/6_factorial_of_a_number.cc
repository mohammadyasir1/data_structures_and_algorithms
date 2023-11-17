#include <iostream>
using namespace std;

int main(){
	int n, fact=1;
	cout<<"enter the number: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		fact*=i;
	}

	if(n>0)
		cout<<fact;
	else if(n<0)
		cout<<"1";
	else
		cout<<"-1";

	return 0;
}
