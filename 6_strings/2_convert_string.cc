#include <bits/stdc++.h>
using namespace std;

string convertString(string str) {
		
	int len = str.strize();

	//by default loop terminate when they found null character '\0'
	//so why we check null character
	
	for(int i=0; i<len; i++){

		str[0] = toupper(str[0]);

		if(str[i] == ' ')
			//if space found then convert the first character
			//after the space to uppercase
			str[i+1] = toupper(str[i+1]);
		
	}
	
	return str;
}

int main() {

	string s;
	getline(cin,s);

	cout<<convertString(s)<<endl;

	return 0;
}