#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"enter a char: ";
	cin>>ch;
	if(isupper(ch)){
		cout<<ch<<" is uppercase"<<endl;
	}else if(islower(ch)){
		cout<<ch<<" is lowercase"<<endl;
	}else if(isdigit(ch)){
		cout<<ch<<" is digit"<<endl;
	}else{
		cout<<"invalid input"<<endl;
	}
	return 0;
}
