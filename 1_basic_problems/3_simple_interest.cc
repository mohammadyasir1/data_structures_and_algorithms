#include <iostream>
using namespace std;

int main(){
	int principal, time, si;
	double rate;

	cout<<"enter principal and time: ";
	cin>>principal>>time;
	cout<<"enter rate: ";
	cin>>rate;
	si = principal*rate*time/100;
	cout<<"Simple interest is "<<si<<endl;
	return 0;
}
