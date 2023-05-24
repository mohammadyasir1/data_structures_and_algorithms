// simple interest
// p=principle, r=rate of interest, t=time period

#include <iostream>
using namespace std;

int main(){
	int p,r,t;
	cout<<"enter p,r and t: ";
	cin>>p>>r>>t;

	int si = (p*r*t)/100;
	cout<<"simple interest is "<<si;
	return 0;
}