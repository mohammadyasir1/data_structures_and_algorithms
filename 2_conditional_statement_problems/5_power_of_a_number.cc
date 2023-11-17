#include <iostream>
using namespace std;

int main(){
	int number, power, ans=1;
	
	cout<<"enter X^N : ";
	cin>>number>>power;
	for(int i=1; i<=power; i++){
		if(number != 0)
			ans*=number;
	}

	cout<<number<<" to the power of "<<power<<" = "<<ans;

	return 0;
}
