#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;
	cout<<"enter the string: ";
	getline(cin,s);

	char k;
	cout<<"enter the character to search: ";
	cin>>k;

	int result = -1;

	int len = s.size();

	for(int i=0; i<len; i++) {
		if(s[i] == k)
			result = i;
	}

	cout<<"the index of the character is "<<result<<endl;

	return 0;
}