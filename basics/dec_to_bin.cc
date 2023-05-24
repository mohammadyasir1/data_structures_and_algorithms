#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int n;
	cout<<"enter a number: ";
	cin>>n;
	int c=n;
	int ans=0;
	int i=0;
	while(n!=0){
		int bits = n&1;
		ans = (bits * pow(10, i))+ans;
		n=n>>1;
		i++;	
	}
	cout<<"binary of "<<c<<" is "<<ans<<endl;

	return 0;
}
