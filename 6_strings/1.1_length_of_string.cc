#include <iostream>
using namespace std;


int main() {
	string s;
	cout<<"enter the string: ";
	
	//taking string as input
	getline(cin,s);

	int index = 0; //index of string
	int length = 0; //length initiated with 0


	//finding the null character
	while(s[index] != '\0') {
		length++;
		index++;
	}

	cout<<"length of the string is "<<length<<endl;

	return 0;
}
