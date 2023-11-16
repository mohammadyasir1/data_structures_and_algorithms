#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;

	cout<<"select operation [+,-,*,/,%] ";
	char oper;
	cin>>oper;

	switch(oper){
		case '+':cout<<a+b;
		break;

		case '-':cout<<a-b;
		break;

		case '*':cout<<a*b;
		break;

		case '/':cout<<a/b;
		break;

		case '%':cout<<a%b;
		break;

		default:
			 cout<<"invalid operation"<<endl;
	}

	return 0;
}
