#include <iostream>
using namespace std;

int main(){
	int amount;
	int rs100, rs50, rs20, rs1;
	cout<<"Enter amount: ";
	cin>>amount;

	switch(1){
		case 1: rs100=amount/100;
			amount%=100;
			cout<<"no of 100rs notes is "<<rs100<<endl;
		case 2: rs50=amount/50;
			amount%=50;
			cout<<"no of 50rs notes is "<<rs50<<endl;
		case 3: rs20=amount/20;
			amount%=20;
			cout<<"no of 20rs notes is "<<rs20<<endl;
		case 4: rs1=amount/1;
			amount%=1;
			cout<<"no of 1rs notes is "<<rs1<<endl;
	}
	return 0;
}
