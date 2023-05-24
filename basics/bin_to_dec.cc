#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int n;
	int i=0, ans=0;
	cout<<"enter bits: ";
	cin>>n;
	int c=n;
	
	while(n!=0){
		int digits=n%10;
		if(digits==1){
			ans=ans+(pow(2,i));
		}
		n=n/10;
		i++;
	}
	cout<<"decimal of "<<c<<" is "<<ans<<endl;

	return 0;
}
