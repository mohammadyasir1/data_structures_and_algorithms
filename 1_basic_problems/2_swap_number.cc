#include <iostream>
using namespace std;

int main(){
	int a,b,temp;
	cin>>a>>b;
	cout<<"Before"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;

	cout<<"After"<<endl;
	cout<<"a="<<a<<", b="<<b<<endl;

	return 0;
}
