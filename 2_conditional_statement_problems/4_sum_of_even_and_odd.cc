#include <iostream>
using namespace std;

int main(){
	
	int n, digit, odd=0, even=0;
	cout<<"enter the number N: ";
	cin>>n;

	while(n>0){
		digit = n%10;
		n=n/10;
		if(!(digit%2==0))
			odd+=digit;
		else
			even+=digit;
	}

	cout<<"sum of odd and even numbers are"<<endl;
	cout<<even<<" "<<odd<<endl;

	return 0;
}
