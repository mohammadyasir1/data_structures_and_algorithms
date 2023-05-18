#include <iostream>
using namespace std;

int main(){
	int a,b;
	char op;
	cout<<"Simple calculator"<<endl;
	cout<<"Enter the value of A and B ex(a+b): ";
	cin>>a>>op>>b;

	switch(op){
		case '+': cout<<"A+B = "<<a+b<<endl;
			  break;
		case '-': cout<<"A-B = "<<a-b<<endl;
			  break;			
		case '*': cout<<"A*B = "<<a*b<<endl;
			  break;
		case '%': cout<<"A%B = "<<a%b<<endl;
			  break;
		case '/': cout<<"A/B = "<<a/b<<endl;
			  break;
		default: cout<<"invalid input!"<<endl;
	}
	return 0;
}
