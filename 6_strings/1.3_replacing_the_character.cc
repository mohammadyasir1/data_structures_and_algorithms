#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cout<<"enter the string: ";
	//taking string as input
	getline(cin,s);


	cout<<"input string is: "<<s<<endl;

	char old;//old character
	cout<<"enter the character you want to replace: ";
	cin>>old;

	char newChar;
	cout<<"enter the character you want to replace with: ";
	cin>>newChar;

	int len = s.size();

	for(int i=0; i<len; i++) {
		if(s[i] == old)
			s[i] = newChar;
	}

	cout<<"the updated string is: "<<s<<endl;
	return 0;

}