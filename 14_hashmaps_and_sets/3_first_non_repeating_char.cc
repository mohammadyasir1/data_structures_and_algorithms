#include <bits/stdc++.h> 
using namespace std;

char first_non_repeating_character(string str) {

	unordered_map<char, int> mp;

	// iterate over string
	for(int i=0; i<str.length(); i++)
		mp[str[i]]++;

	// iterate over map
	for(int i=0; i<str.length(); i++) {
		// check unique element thats not repeat
		if(mp[str[i]] <= 1) {
			return str[i];
			break;
		}
	}

	return str[0];
}

int main() {

	string str = "aDcadhc";
	cout<<"given string are: "<<str<<endl;
	cout<<"first non repeating char in a string is: "<<first_non_repeating_character(str)<<endl;
	return 0;

}